#include<iostream>
using namespace std;

class CLine
{
private:
	int a;
	int b;
	int c;
public:
	CLine& operator=(const CLine&);
	void Input();
	void Output();
};

CLine& CLine::operator=(const CLine& x)
{
	a = x.a;
	b = x.b;
	c = x.c;
	return *this;
}

void CLine::Input()
{
	cout << "Enter a:	";
	cin >> a;
	cout << "Enter b:	";
	cin >> b;
	cout << "Enter c:	";
	cin >> c;
}

void CLine::Output()
{
	cout << a << "x + " << b << "y" << " + " << c << " = 0.";
}