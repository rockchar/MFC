#pragma once

/******************************************************************************************
Note: On compilation if we get an error entry point must be difined then go to linker ->
system->subsystem and change the subsystem to windows.
*******************************************************************************************/
class CMyAPP :	public CWinApp
{
public:
	CMyAPP();
	~CMyAPP();
public:
	virtual BOOL InitInstance();
};

