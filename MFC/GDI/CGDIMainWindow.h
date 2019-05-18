#pragma once
#include <afxwin.h>
class CGDIMainWindow :	public CFrameWnd
{
public:
	CGDIMainWindow();
	~CGDIMainWindow();
protected:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};

