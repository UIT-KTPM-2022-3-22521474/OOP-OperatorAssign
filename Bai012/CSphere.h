#include "C3DPoint.h"

class CSphere
{
private:
	C3DPoint I;
	float r;
public:
	CSphere& operator=(const CSphere&);
	void Input();
	void Output();
};

CSphere& CSphere::operator=(const CSphere& x)
{
	I = x.I;
	r = x.r;
	return *this;
}

void CSphere::Input()
{
	I.Input();
	cout << "Enter the sphere's radius:	";
	cin >> r;
}

void CSphere::Output()
{
	cout << "\nThe centerpoint's coordinate is:	";
	I.Output();
	cout << ".\nThe sphere's radius is:			" << r << ".";
}