#include "CMainWindow.h"

BEGIN_MESSAGE_MAP (CMainWindow,CFrameWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

CMainWindow::CMainWindow()
{
	Create(NULL, "Hello MFC application");
}


CMainWindow::~CMainWindow()
{
}

void CMainWindow::OnPaint()
{
	CPaintDC pDc(this);
	CRect    rect;
	GetClientRect(&rect);
	pDc.DrawText("Hello MFC", -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}
