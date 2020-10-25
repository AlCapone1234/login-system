#include "cApp.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp()
{

}

cApp::~cApp()
{

}

bool cApp::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->SetBackgroundColour(wxColor(128, 128, 128));
	m_frame1->Show();

	return true;
}
