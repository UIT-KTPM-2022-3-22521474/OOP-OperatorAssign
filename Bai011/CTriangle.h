#include "C2DPoint.h"

class CTriangle
{
private:
	C2DPoint a;
	C2DPoint b;
	C2DPoint c;
public:
	CTriangle& operator=(const CTriangle&);
	void Input();
	void Output();
};

CTriangle& CTriangle::operator=(const CTriangle& x)
{
	a = x.a;
	b = x.b;
	c = x.c;
	return *this;
}

void CTriangle::Input()
{
	cout << "Enter the first point's coordinate of the triangle:" << endl;
	a.Input();
	cout << "Enter the second point's coordinate of the triangle:" << endl;
	b.Input();
	cout << "Enter the third point's coordinate of the triangle:" << endl;
	c.Input();
}

void CTriangle::Output()
{
	a.Output();
	cout << ", ";
	b.Output();
	cout << ", ";
	c.Output();
	cout << ".";
}