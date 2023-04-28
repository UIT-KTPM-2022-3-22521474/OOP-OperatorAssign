#include<iostream>
using namespace std;

class CComplexNumber
{
private:
	int Real;
	int Imaginary;
public:
	CComplexNumber& operator=(const CComplexNumber&);
	void Input();
	void Output();
};

void CComplexNumber::Input()
{
	cout << "Enter the real part:	";
	cin >> Real;
	cout << "Enter the imaginary part : ";
	cin >> Imaginary;
}

CComplexNumber& CComplexNumber::operator=(const CComplexNumber& x)
{
	Real = x.Real;
	Imaginary = x.Imaginary;
	return *this;
}

void CComplexNumber::Output()
{
	cout << Real << " + " << Imaginary << "i.";
}