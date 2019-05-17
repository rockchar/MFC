/************************************************************************************************************************
The following is a SDK style window program in C.The program creates a window and responds to a WM_PAINT message
by drawing an ellipse in the center
*************************************************************************************************************************/

#include<Windows.h>

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
***************************************************************************************************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{



}

long __stdcall WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	return 0;
}
