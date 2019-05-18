#include "CGDIMainWindow.h"
/**********************************************************************************************************************************
1. The part of windows that is responsible for graphics output is the Graphics Device Interface or GDI. The GDI provides a number
   of services that an application can call. Together these services constitute a powerful and robust graphical programming language.

2. MFC works on top of the graphics API and codifies the interface with c++ classes that represent the various components of the 
   windows GDI.

3. GDI uses a simple mechanism to ensure every program that draws on the window plays by the rules. That mechanism is called the 
   "DEVICE CONTEXT" or DC.

4. When a windows program draws to the screen, a printer, or any other output device, it does not output the pixels directly to the
   device. Instead it draws to a Logical "display surface represented by device context or DC.



************************************************************************************************************************************/
BEGIN_MESSAGE_MAP(CGDIMainWindow, CFrameWnd)
	afx_msg ON_WM_PAINT()
END_MESSAGE_MAP()

CGDIMainWindow::CGDIMainWindow()
{
	Create(NULL,"GDI TUTORIAL",WS_OVERLAPPEDWINDOW);
}


CGDIMainWindow::~CGDIMainWindow()
{
}

void CGDIMainWindow::OnPaint()
{

}
