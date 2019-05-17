/************************************************************************************************************************
The following is a SDK style window program in C.The program creates a window and responds to a WM_PAINT message
by drawing an ellipse in the center
*************************************************************************************************************************/

#include<Windows.h>
char szClassName[] = "MyWindowClass";
//window proc
long WINAPI WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

//entry point for the application
/**************************************************************************************************************************
METHOD NAME : WinMain
DESCRIPTION : Entry point for the application
PARAMETERS  : hInstance - handle to the instance of the program.The operating system uses this value to correctly identify
						  the exe or module when it is loaded in memory.This instance handle is needed for certain windows 
						  functions, for example loading icons and bitmaps.
			  hPrevInstance - this is not used anymore and a legacy parameter. it was used in 16 bit windows before. now this
						  parameter is always zero.
			  lpszCmdLine - the command line parameters passed to the exe
			  nCmdShow    - integere parameter or a flag that denotes if the main window should be shown maximized,minimized 
			                or normal.       
RETURNS     : The function returns an int value. The return value is not used by the operating system, but you can use the return 
			  value to convey a status code to some other program that you write.
***************************************************************************************************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	//WNDCLASS struct that defines the various properties of a window
	WNDCLASS wc = { sizeof(WNDCLASS) };
	HWND     hwnd;
	MSG      msg;

	
	wc.style = CS_HREDRAW | CS_VREDRAW;
	//A pointer to the window procedure. You must use the CallWindowProc function to call the window procedure. 
	//For more information, see WindowProc.
	wc.lpfnWndProc = WndProc;
	//The number of extra bytes to allocate following the window-class structure. The system initializes the bytes to zero.
	wc.cbClsExtra  = 0;
	//A handle to the instance that contains the window procedure for the class.
	wc.hInstance = hInstance;
	//icon for the window
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	//cursor
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	//the windowbckground color
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	//the menu
	wc.lpszMenuName = NULL;
	//finally the class(window name)
	wc.lpszClassName = szClassName;
	//regiser the class now so that it can receive windows messages
	RegisterClass(&wc);
	
	//now create the window 
	hwnd = CreateWindow(szClassName,szClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
		CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);
	DWORD a = GetLastError();
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	//wParam will contain errors or return codes 
	return msg.wParam;
}
/******************************************************************************************************************************
METHOD NAME : WndProc
DESCRIPTION : Window procedure that handles the message loop 
PARAMETERS  : hWnd        - handle to the window 
              message     - this is the message code received in the application. For example WM_CHAR denotes a char key, WM_SIZE
			                when the window is resized.
			  wParam and lParam    - the contents of this parameter is dependent on the type of message. For example in case of 
							WM_SIZE the wParam contains information if the window was maximized,minimized or resized. The lparam 
							contains the new height and width of the window packed into two 16 bit values packed into a 32 or 64 bit 
							integer.
RETURNS     : LRESULT is an integer value that your program returns to Windows. It contains your program's response to a particular message. 
              The meaning of this value depends on the message code. 
*******************************************************************************************************************************/
long WINAPI WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	switch (message)
	{
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		Ellipse(hdc, 0, 0, 100, 200);
		EndPaint(hWnd, &ps);
		return 0;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hWnd,message,wParam,lParam);
}
