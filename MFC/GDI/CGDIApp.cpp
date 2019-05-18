#include<afxwin.h>
#include "CGDIApp.h"
#include "CGDIMainWindow.h"

CGDIApp gdIApp;
CGDIApp::CGDIApp()
{
}


CGDIApp::~CGDIApp()
{
}

BOOL CGDIApp::InitInstance()
{
	//the deletion of m_pMainWnd is automatically handled by the framework.
	//if the frame window is subclassed then cleanup can be done in postncdestroy
	m_pMainWnd = new CGDIMainWindow();
	m_pMainWnd->ShowWindow(m_nCmdShow);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}

