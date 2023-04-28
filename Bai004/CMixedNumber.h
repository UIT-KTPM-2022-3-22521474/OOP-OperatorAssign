#include<iostream>
using namespace std;

class CMixedNumber
{
private:
	int IntPt;
	int Numerator;
	int Denominator;
public:
	CMixedNumber& operator=(const CMixedNumber&);
	void Input();
	void Output();
};

void CMixedNumber::Input()
{
	cout << "Enter the integer part:	";
	cin >> IntPt;
	cout << "Enter the numerator:	";
	cin >> Numerator;
	cout << "Enter the denominator:	";
	cin >> Denominator;
}

CMixedNumber& CMixedNumber::operator=(const CMixedNumber& x)
{
	IntPt = x.IntPt;
	Numerator = x.Numerator;
	Denominator = x.Denominator;
	return *this;
}

void CMixedNumber::Output()
{
	cout << IntPt << "(" << Numerator << "/" << Denominator << ").";
}