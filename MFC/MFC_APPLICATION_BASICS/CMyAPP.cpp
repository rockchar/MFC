#include<afxwin.h>
#include "CMyAPP.h"
#include "CMainWindow.h"
CMyAPP myApp;

CMyAPP::CMyAPP()
{
}


CMyAPP::~CMyAPP()
{
}

BOOL CMyAPP::InitInstance()
{
	//the deletion of m_pMainWnd is automatically handled by the framework.
	//if the frame window is subclassed then cleanup can be done in postncdestroy
	m_pMainWnd = new CMainWindow();
	m_pMainWnd->ShowWindow(m_nCmdShow);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}
