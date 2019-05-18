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

5. The device context is a data struct deep inside windows that containd fields describing everything the GDI needs to know about 
   the display surface it needs to draw on including the physical device with which it is associated and assorted state information.

6. Before anything is drawn on the screen, a windows program acquires the device context handle from the GDI and passes it back to the GDI 
   everytime it calls a GDI output function. Without a valid DC handle, GDI will not draw a single pixel.

7. Through the device context the GDI makes sure that everything the program draws is clipped to particular area of the screen. GDI plays
   a huge role in making the GDI device independent.
************************************************************************************************************************************/

/******************************************   MFC DEVICE CONTEXT CLASSES  **********************************************************
1. One way to get the device context in MFC is the following.A call to CWnd::GetDC()
   CDC * pDC = GetDC()
   //do some drawing
   ReleaseDC(pDC)
2. If we want to draw in the onPaint() handler, we will use CWnd::BeginPaint() and CWnd::EndPaint() in place of CWnd::GetDC() 
   and CWnd::ReleaseDC()
   PAINTSTRUCT ps;
   CDC* pDC = BeginPaint(&ps);
   //Do some drawing
   EndPaint(&ps);

   ******************************************************************************************************************
   GDI also supports metafiles that store the sequences of GDI commands that can be played back to produce a physical
   output.
   *******************************************************************************************************************
   SPECIAL PURPOSE DEVICE CONTEXT CLASSES:
   ------------------------------------------------
   CPaintDC  - For drawing in windows client area(OnPaint() handlers only.
   CClientDC - For drawind in windows client area(any where but not OnPaint()
   CWindowsDC- For drawing anywhere on the window including the non-client area
   CMetaFileDC-For drawing to GDI metafile

   The above classes are designed to be instantiated directly. Each class's constructor and destructor call the appropriate
   functions to acquire and release the device context.
   **if the classes are constructed on heap, then delete should be called 
   e.g. CPaintDC * pDC = new CPaintDC()
        ///do some drawing
		delete pDC.
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
