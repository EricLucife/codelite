//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: quickfindbarbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "quickfindbarbase.h"

// Declare the bitmap loading function
extern void wxCrafteryhjh4ZInitBitmapResources();

static bool bBitmapLoaded = false;

QuickFindBarBase::QuickFindBarBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafteryhjh4ZInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);

    m_toolbar =
        new clToolBar(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTB_NODIVIDER | wxTB_FLAT);
    m_toolbar->SetToolBitmapSize(wxSize(16, 16));

    mainSizer->Add(m_toolbar, 0, wxEXPAND, WXC_FROM_DIP(0));

    wxFlexGridSizer* flexGridSizer107 = new wxFlexGridSizer(0, 4, 0, 0);
    flexGridSizer107->SetFlexibleDirection(wxBOTH);
    flexGridSizer107->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer107->AddGrowableCol(0);

    mainSizer->Add(flexGridSizer107, 1, wxEXPAND, WXC_FROM_DIP(0));

    m_textCtrlFind = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                    wxTE_RICH | wxTE_PROCESS_ENTER);
    m_textCtrlFind->SetFocus();
#if wxVERSION_NUMBER >= 3000
    m_textCtrlFind->SetHint(wxT(""));
#endif

    flexGridSizer107->Add(m_textCtrlFind, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(2));

    m_buttonFind =
        new clThemedButton(this, wxID_FIND, _("Find"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonFind->SetDefault();

    flexGridSizer107->Add(m_buttonFind, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_buttonFindPrev =
        new clThemedButton(this, wxID_BACKWARD, _("Find Prev"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer107->Add(m_buttonFindPrev, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_buttonFindAll =
        new clThemedButton(this, wxID_FIND_ALL, _("Find All"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer107->Add(m_buttonFindAll, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_textCtrlReplace = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                       wxTE_RICH | wxTE_PROCESS_ENTER);
#if wxVERSION_NUMBER >= 3000
    m_textCtrlReplace->SetHint(wxT(""));
#endif

    flexGridSizer107->Add(m_textCtrlReplace, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(2));

    m_buttonReplace =
        new clThemedButton(this, wxID_REPLACE, _("Replace"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer107->Add(m_buttonReplace, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_buttonReplaceAll = new clThemedButton(this, wxID_REPLACE_ALL, _("Replace All"), wxDefaultPosition,
                                            wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    flexGridSizer107->Add(m_buttonReplaceAll, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    SetName(wxT("QuickFindBarBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_textCtrlFind->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(QuickFindBarBase::OnEnter), NULL, this);
    m_textCtrlFind->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(QuickFindBarBase::OnText), NULL, this);
    m_textCtrlFind->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnKeyDown), NULL, this);
    m_buttonFind->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnFind), NULL, this);
    m_buttonFind->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnFindUI), NULL, this);
    m_buttonFind->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_buttonFindPrev->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnFindPrev), NULL,
                              this);
    m_buttonFindPrev->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnFindPrevUI), NULL, this);
    m_buttonFindPrev->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_buttonFindAll->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnFindAll), NULL,
                             this);
    m_buttonFindAll->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnFindAllUI), NULL, this);
    m_buttonFindAll->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_textCtrlReplace->Connect(wxEVT_COMMAND_TEXT_UPDATED,
                               wxCommandEventHandler(QuickFindBarBase::OnReplaceTextUpdated), NULL, this);
    m_textCtrlReplace->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(QuickFindBarBase::OnReplaceTextEnter),
                               NULL, this);
    m_textCtrlReplace->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnReplaceKeyDown), NULL, this);
    m_buttonReplace->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnReplace), NULL,
                             this);
    m_buttonReplace->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnReplaceUI), NULL, this);
    m_buttonReplace->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_buttonReplaceAll->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnReplaceAll),
                                NULL, this);
    m_buttonReplaceAll->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnReplaceAllUI), NULL, this);
    m_buttonReplaceAll->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
}

QuickFindBarBase::~QuickFindBarBase()
{
    m_textCtrlFind->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(QuickFindBarBase::OnEnter), NULL, this);
    m_textCtrlFind->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(QuickFindBarBase::OnText), NULL, this);
    m_textCtrlFind->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnKeyDown), NULL, this);
    m_buttonFind->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnFind), NULL, this);
    m_buttonFind->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnFindUI), NULL, this);
    m_buttonFind->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_buttonFindPrev->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnFindPrev),
                                 NULL, this);
    m_buttonFindPrev->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnFindPrevUI), NULL, this);
    m_buttonFindPrev->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_buttonFindAll->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnFindAll), NULL,
                                this);
    m_buttonFindAll->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnFindAllUI), NULL, this);
    m_buttonFindAll->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_textCtrlReplace->Disconnect(wxEVT_COMMAND_TEXT_UPDATED,
                                  wxCommandEventHandler(QuickFindBarBase::OnReplaceTextUpdated), NULL, this);
    m_textCtrlReplace->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(QuickFindBarBase::OnReplaceTextEnter),
                                  NULL, this);
    m_textCtrlReplace->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnReplaceKeyDown), NULL, this);
    m_buttonReplace->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnReplace), NULL,
                                this);
    m_buttonReplace->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnReplaceUI), NULL, this);
    m_buttonReplace->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
    m_buttonReplaceAll->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(QuickFindBarBase::OnReplaceAll),
                                   NULL, this);
    m_buttonReplaceAll->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(QuickFindBarBase::OnReplaceAllUI), NULL,
                                   this);
    m_buttonReplaceAll->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(QuickFindBarBase::OnButtonKeyDown), NULL, this);
}

QuickFindBarOptionsMenuBase::QuickFindBarOptionsMenuBase(wxWindow* parent, long style)
    : wxPopupTransientWindow(parent, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafteryhjh4ZInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer60 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer60);

    m_panel71 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                            wxTAB_TRAVERSAL | wxBORDER_SIMPLE);

    boxSizer60->Add(m_panel71, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxGridSizer* gridSizer49 = new wxGridSizer(0, 2, 0, 0);
    m_panel71->SetSizer(gridSizer49);

    m_checkBoxCase = new wxCheckBox(m_panel71, wxID_ANY, _("Case Sensitive"), wxDefaultPosition,
                                    wxDLG_UNIT(m_panel71, wxSize(-1, -1)), 0);
    m_checkBoxCase->SetValue(false);
    m_checkBoxCase->SetToolTip(_("Use case sensitive match"));

    gridSizer49->Add(m_checkBoxCase, 0, wxALL | wxALIGN_LEFT, WXC_FROM_DIP(3));

    m_checkBoxRegex = new wxCheckBox(m_panel71, wxID_ANY, _("Regular Expression"), wxDefaultPosition,
                                     wxDLG_UNIT(m_panel71, wxSize(-1, -1)), 0);
    m_checkBoxRegex->SetValue(false);
    m_checkBoxRegex->SetToolTip(_("Use regular expression"));

    gridSizer49->Add(m_checkBoxRegex, 0, wxALL | wxALIGN_LEFT, WXC_FROM_DIP(3));

    m_checkBoxWord = new wxCheckBox(m_panel71, wxID_ANY, _("Match a whole word"), wxDefaultPosition,
                                    wxDLG_UNIT(m_panel71, wxSize(-1, -1)), 0);
    m_checkBoxWord->SetValue(false);
    m_checkBoxWord->SetToolTip(_("Match a whole word only"));

    gridSizer49->Add(m_checkBoxWord, 0, wxALL | wxALIGN_LEFT, WXC_FROM_DIP(3));

    m_checkBoxWildcard = new wxCheckBox(m_panel71, wxID_ANY, _("Use wildcard syntax"), wxDefaultPosition,
                                        wxDLG_UNIT(m_panel71, wxSize(-1, -1)), 0);
    m_checkBoxWildcard->SetValue(false);
    m_checkBoxWildcard->SetToolTip(_("Use wildcard syntax (* and ?)"));

    gridSizer49->Add(m_checkBoxWildcard, 0, wxALL | wxALIGN_LEFT, WXC_FROM_DIP(3));

    m_checkBoxMultipleSelections = new wxCheckBox(m_panel71, wxID_ANY, _("Enable multiple selections"),
                                                  wxDefaultPosition, wxDLG_UNIT(m_panel71, wxSize(-1, -1)), 0);
    m_checkBoxMultipleSelections->SetValue(false);
    m_checkBoxMultipleSelections->SetToolTip(_("Select each match without de-selectiing the previous match"));

    gridSizer49->Add(m_checkBoxMultipleSelections, 0, wxALL | wxALIGN_LEFT, WXC_FROM_DIP(3));

    SetName(wxT("QuickFindBarOptionsMenuBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_checkBoxRegex->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                             wxCommandEventHandler(QuickFindBarOptionsMenuBase::OnCheckBoxRegex), NULL, this);
    m_checkBoxWildcard->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                wxCommandEventHandler(QuickFindBarOptionsMenuBase::OnCheckWild), NULL, this);
}

QuickFindBarOptionsMenuBase::~QuickFindBarOptionsMenuBase()
{
    m_checkBoxRegex->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                wxCommandEventHandler(QuickFindBarOptionsMenuBase::OnCheckBoxRegex), NULL, this);
    m_checkBoxWildcard->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                   wxCommandEventHandler(QuickFindBarOptionsMenuBase::OnCheckWild), NULL, this);
}

QuickFindBarImages::QuickFindBarImages()
    : wxImageList(16, 16, true)
    , m_imagesWidth(16)
    , m_imagesHeight(16)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafteryhjh4ZInitBitmapResources();
        bBitmapLoaded = true;
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmpMenu"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("m_bmpMenu"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("marker-16"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("marker-16"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("case-sensitive"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("case-sensitive"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("word"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("word"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("regex"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("regex"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("replace-controls"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("replace-controls"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("find-bar-close-16"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("find-bar-close-16"), bmp));
        }
    }
}

QuickFindBarImages::~QuickFindBarImages() {}
