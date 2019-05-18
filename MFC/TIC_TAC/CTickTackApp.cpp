#include "CTickTackApp.h"
#include "CBoardWindow.h"


CTickTackApp gameApp;

CTickTackApp::CTickTackApp()
{
}


CTickTackApp::~CTickTackApp()
{
}

BOOL CTickTackApp::InitInstance()
{
	m_pMainWnd = new CBoardWindow();
	m_pMainWnd->ShowWindow(m_nCmdShow);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}
