#include "C2DPoint.h"

class CCircle
{
private:
	C2DPoint I;
	float r;
public:
	CCircle& operator=(const CCircle&);
	void Input();
	void Output();
};

CCircle& CCircle::operator=(const CCircle& x)
{
	I = x.I;
	r = x.r;
	return *this;
}

void CCircle::Input()
{
	I.Input();
	cout << "Enter the radius:	";
	cin >> r;
}

void CCircle::Output()
{
	cout << "\nThe centerpoint's coordinate is: ";
	I.Output();
	cout << ".\nThe circle's radius is:	" << r << ".";
}