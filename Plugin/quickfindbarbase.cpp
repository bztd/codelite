//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: quickfindbarbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "quickfindbarbase.h"

// Declare the bitmap loading function
extern void wxCrafteryhjh4ZInitBitmapResources();

namespace
{
// return the wxBORDER_SIMPLE that matches the current application theme
wxBorder get_border_simple_theme_aware_bit()
{
#if wxVERSION_NUMBER >= 3300 && defined(__WXMSW__)
    return wxSystemSettings::GetAppearance().IsDark() ? wxBORDER_SIMPLE : wxBORDER_DEFAULT;
#else
    return wxBORDER_DEFAULT;
#endif
} // DoGetBorderSimpleBit
bool bBitmapLoaded = false;
} // namespace

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

    m_textCtrlFind = new clThemedTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                          wxTE_PROCESS_ENTER);
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
                                       wxTE_PROCESS_ENTER);
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
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    // Connect events
    m_textCtrlFind->Bind(wxEVT_COMMAND_TEXT_ENTER, &QuickFindBarBase::OnEnter, this);
    m_textCtrlFind->Bind(wxEVT_COMMAND_TEXT_UPDATED, &QuickFindBarBase::OnText, this);
    m_textCtrlFind->Bind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnKeyDown, this);
    m_buttonFind->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnFind, this);
    m_buttonFind->Bind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnFindUI, this);
    m_buttonFind->Bind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_buttonFindPrev->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnFindPrev, this);
    m_buttonFindPrev->Bind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnFindPrevUI, this);
    m_buttonFindPrev->Bind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_buttonFindAll->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnFindAll, this);
    m_buttonFindAll->Bind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnFindAllUI, this);
    m_buttonFindAll->Bind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_textCtrlReplace->Bind(wxEVT_COMMAND_TEXT_UPDATED, &QuickFindBarBase::OnReplaceTextUpdated, this);
    m_textCtrlReplace->Bind(wxEVT_COMMAND_TEXT_ENTER, &QuickFindBarBase::OnReplaceTextEnter, this);
    m_textCtrlReplace->Bind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnReplaceKeyDown, this);
    m_buttonReplace->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnReplace, this);
    m_buttonReplace->Bind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnReplaceUI, this);
    m_buttonReplace->Bind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_buttonReplaceAll->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnReplaceAll, this);
    m_buttonReplaceAll->Bind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnReplaceAllUI, this);
    m_buttonReplaceAll->Bind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
}

QuickFindBarBase::~QuickFindBarBase()
{
    m_textCtrlFind->Unbind(wxEVT_COMMAND_TEXT_ENTER, &QuickFindBarBase::OnEnter, this);
    m_textCtrlFind->Unbind(wxEVT_COMMAND_TEXT_UPDATED, &QuickFindBarBase::OnText, this);
    m_textCtrlFind->Unbind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnKeyDown, this);
    m_buttonFind->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnFind, this);
    m_buttonFind->Unbind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnFindUI, this);
    m_buttonFind->Unbind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_buttonFindPrev->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnFindPrev, this);
    m_buttonFindPrev->Unbind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnFindPrevUI, this);
    m_buttonFindPrev->Unbind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_buttonFindAll->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnFindAll, this);
    m_buttonFindAll->Unbind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnFindAllUI, this);
    m_buttonFindAll->Unbind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_textCtrlReplace->Unbind(wxEVT_COMMAND_TEXT_UPDATED, &QuickFindBarBase::OnReplaceTextUpdated, this);
    m_textCtrlReplace->Unbind(wxEVT_COMMAND_TEXT_ENTER, &QuickFindBarBase::OnReplaceTextEnter, this);
    m_textCtrlReplace->Unbind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnReplaceKeyDown, this);
    m_buttonReplace->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnReplace, this);
    m_buttonReplace->Unbind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnReplaceUI, this);
    m_buttonReplace->Unbind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
    m_buttonReplaceAll->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &QuickFindBarBase::OnReplaceAll, this);
    m_buttonReplaceAll->Unbind(wxEVT_UPDATE_UI, &QuickFindBarBase::OnReplaceAllUI, this);
    m_buttonReplaceAll->Unbind(wxEVT_KEY_DOWN, &QuickFindBarBase::OnButtonKeyDown, this);
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
                            wxTAB_TRAVERSAL | get_border_simple_theme_aware_bit());

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
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    // Connect events
    m_checkBoxRegex->Bind(wxEVT_COMMAND_CHECKBOX_CLICKED, &QuickFindBarOptionsMenuBase::OnCheckBoxRegex, this);
    m_checkBoxWildcard->Bind(wxEVT_COMMAND_CHECKBOX_CLICKED, &QuickFindBarOptionsMenuBase::OnCheckWild, this);
}

QuickFindBarOptionsMenuBase::~QuickFindBarOptionsMenuBase()
{
    m_checkBoxRegex->Unbind(wxEVT_COMMAND_CHECKBOX_CLICKED, &QuickFindBarOptionsMenuBase::OnCheckBoxRegex, this);
    m_checkBoxWildcard->Unbind(wxEVT_COMMAND_CHECKBOX_CLICKED, &QuickFindBarOptionsMenuBase::OnCheckWild, this);
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
}

QuickFindBarImages::~QuickFindBarImages() {}
