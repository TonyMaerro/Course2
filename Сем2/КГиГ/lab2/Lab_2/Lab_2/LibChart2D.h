#pragma once
#define LIBGRAPH 1
#include "pch.h"


struct CSizeD
{
	double cx;
	double cy;
};

struct CRectD
{
	double left;
	double top;
	double right;
	double bottom;
	CRectD() { left = top = right = bottom = 0; };
	CRectD(double l, double t, double r, double b);
	void SetRectD(double l, double t, double r, double b);
	CSizeD SizeD();	// ���������� �������(������, ������) �������������� 
};


struct CMyPen
{
	int PenStyle;		// ����� ����
	int PenWidth;		// ������� ���� 
	COLORREF PenColor;	// ���� ���� 
	CMyPen() { PenStyle = PS_SOLID; PenWidth = 1; PenColor = RGB(0, 0, 0); };
	void Set(int PS, int PW, COLORREF PC)
	{
		PenStyle = PS; PenWidth = PW; PenColor = PC;
	};
};


CMatrix SpaceToWindow(CRectD& rs, CRect& rw);
// ���������� ������� ��������� ��������� �� ������� � �������
// rs - ������� � ������� ����������� - double
// rw - ������� � ������� ����������� - int
CMatrix InitMatrix(
	double el00, double el01, double el02,
	double el10, double el11, double el12,
	double el20, double el21, double el22);


class CPlot2D
{
	CMatrix X;				// ��������
	CMatrix Y;				// �������
	CMatrix K;				// ������� ��������� ���������
	CRect RW;				// ������������� � ����
	CRectD RS;				// ������������� ������� � ���
	CMyPen PenLine;			// ���� ��� �����
	CMyPen PenAxis;			// ���� ��� ����
public:
	CPlot2D() { K.RedimMatrix(3, 3); };			//����������� �� ���������
	void SetParams(CMatrix& XX, CMatrix& YY, CRect& RWX);	// ��������� ���������� �������
	void SetWindowRect(CRect& RWX);				//��������� ������� � ���� ��� ����������� �������
	void GetWindowCoords(double xs, double ys, int& xw, int& yw);	//�������� ���������� ����� �� ��� � ������� ��
	void SetPenLine(CMyPen& PLine);				// ���� ��� ��������� �������
	void SetPenAxis(CMyPen& PAxis);				// ���� ��� ���� ���������
	void Draw(CDC& dc, int Ind1, int Int2);		// ��������� � ��������������� ���������� ���������
};



