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
	m_pMainWnd = new CMainWindow();
	m_pMainWnd->ShowWindow(m_nCmdShow);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}
