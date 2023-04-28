#include<iostream>
using namespace std;

class CFraction
{
private:
	int Numerator;
	int Denominator;
public:
	CFraction& operator=(const CFraction&);
	void Input();
	void Output();
};

void CFraction::Input()
{
	cout << "Enter numerator:	";
	cin >> Numerator;
	cout << "Enter denominator:	";
	cin >> Denominator;
}

CFraction& CFraction::operator=(const CFraction& x)
{
	Numerator = x.Numerator;
	Denominator = x.Denominator;
	return *this;
}

void CFraction::Output()
{
	cout << Numerator << "/" << Denominator;
}