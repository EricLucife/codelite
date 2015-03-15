#include "clClangFormatLocator.h"
#include "cl_standard_paths.h"
#include <wx/filename.h>
#include <wx/regex.h>
#include "globals.h"
#include <wx/tokenzr.h>
#include "procutils.h"
#include <wx/log.h>

clClangFormatLocator::clClangFormatLocator() {}

clClangFormatLocator::~clClangFormatLocator() {}

bool clClangFormatLocator::Locate(wxString& clangFormat)
{
#ifdef __WXGTK__
    wxFileName fnClangFormat("/usr/bin", "");
    wxArrayString nameOptions;
    nameOptions.Add("clang-format");
    nameOptions.Add("clang-format-3.3");
    nameOptions.Add("clang-format-3.4");
    nameOptions.Add("clang-format-3.5");
    nameOptions.Add("clang-format-3.6");
    nameOptions.Add("clang-format-3.7");

    for(size_t i = 0; i < nameOptions.GetCount(); ++i) {
        fnClangFormat.SetFullName(nameOptions.Item(i));
        if(fnClangFormat.Exists()) {
            clangFormat = fnClangFormat.GetFullPath();
            return true;
        }
    }
    return false;
#else
    wxFileName fnClangFormat(clStandardPaths::Get().GetBinaryFullPath("codelite-clang-format"));
    if(fnClangFormat.FileExists()) {
        clangFormat = fnClangFormat.GetFullPath();
        return true;
    }
    return false;
#endif
}

double clClangFormatLocator::GetVersion(const wxString& clangFormat) const
{
    double double_version = 3.3;
#ifdef __WXGTK__
    //    Ubuntu clang-format version 3.5.0-4ubuntu2~trusty2 (tags/RELEASE_350/final) (based on LLVM 3.5.0) // Linux
    //    LLVM version 3.3 // Linux, old format
    //    clang-format version 3.6.0 (217570) // Windows
    double_version = 3.3;
    
    static wxRegEx reClangFormatVersion("version ([0-9]+\\.[0-9]+)");
    wxString command;
    command << clangFormat;
    ::WrapWithQuotes(command);
    command << " --version";
    wxString output = ProcUtils::SafeExecuteCommand(command);

    wxArrayString lines = ::wxStringTokenize(output, "\n", wxTOKEN_STRTOK);
    for(size_t i = 0; i < lines.GetCount(); ++i) {
        if(reClangFormatVersion.Matches(lines.Item(i))) {
            wxString version = reClangFormatVersion.GetMatch(lines.Item(i), 1);
            //wxLogMessage("clang-format version is %s", version);
            version.ToCDouble(&double_version);
            return double_version;
        }
    }
#elif defined(__WXMSW__)
    double_version = 3.6;
#else
    double_version = 3.5;
#endif
    return double_version; // Default
}
