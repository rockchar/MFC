#pragma once
#include <afxwin.h>

#define EX 1
#define OH 2

class CBoardWindow :
	public CWnd
{
public:
	CBoardWindow();
	~CBoardWindow();
protected:
	//the grid on which we will draw
	static const CRect m_rcSquares[9];
	//value of the grid
	int  m_nGameGrid[9];
	int  m_nNextChar;
	int  GetRectID(CPoint point);
	void DrawBoard(CDC *pDC);
	void DrawX(CDC *pDC, int nPos);
	void DrawO(CDC *pDC, int nPos);
	void ResetGame();
	void CheckForGameOver();
	int  IsWinner();
	BOOL IsDraw();

	virtual void PostNcDestroy();
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	DECLARE_MESSAGE_MAP()
};

