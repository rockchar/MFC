#pragma once
#include <afxwin.h>

class CMainWindow :
	public CFrameWnd
{
public:
	CMainWindow();
	~CMainWindow();
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};

