#include<iostream>
using namespace std;

class CMonomial
{
private:
	int Coefficient;
	int Exponent;
public:
	CMonomial& operator=(const CMonomial&);
	void Input();
	void Output();
};

CMonomial& CMonomial::operator=(const CMonomial& x)
{
	Coefficient = x.Coefficient;
	Exponent = x.Exponent;
	return *this;
}

void CMonomial::Input()
{
	cout << "Enter the coefficient of the monomial:	";
	cin >> Coefficient;
	cout << "Enter the exponent of the monomial:	";
	cin >> Exponent;
}

void CMonomial::Output()
{
	cout << Coefficient << "x^" << Exponent << ".";
}