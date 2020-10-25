#pragma once
#include "wx\wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
public:

	wxStaticText* m_text1 = nullptr;
	wxButton* m_button1 = nullptr;
	wxTextCtrl* username = nullptr;
	wxTextCtrl* password = nullptr;


	void OnButtonClicked(wxCommandEvent &evt);

	wxDECLARE_EVENT_TABLE();
};

