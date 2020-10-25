#include "cMain.h"
#include "Users.h"

#include <Windows.h>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(1, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Login System", wxPoint(30, 30), wxSize(400, 300))
{

	m_text1 = new wxStaticText(this, wxID_ANY, "Login System", wxPoint(90, 0), wxSize(0, 0));
	wxFont textfont = m_text1->GetFont();
	textfont.SetPointSize(25);
	m_text1->SetFont(textfont);

	username = new wxTextCtrl(this, wxID_ANY, "Username", wxPoint(140, 100), wxSize(100, 20));
	password = new wxTextCtrl(this, wxID_ANY, "Password", wxPoint(140, 120), wxSize(100, 20));

	m_button1 = new wxButton(this, 1, "Login", wxPoint(115, 200), wxSize(150, 50));
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	wxString userinfo = username->GetValue();
	wxString passinfo = password->GetValue();

	if (userinfo == user.user1 && passinfo == pass.pass1)
	{
		MessageBoxA(NULL, "You have sucessfully logged in!", "Logged in", MB_ICONASTERISK);
		m_frame2 = new wxFrame(this, wxID_ANY, "Welcome!", wxPoint(30, 30), wxSize(400, 300));

		evt.Skip();
	}
	else
	{
		MessageBoxA(NULL, "Incorrect Username or Password", "Incorrect Warning", MB_ICONWARNING);
		evt.Skip();
	}
}