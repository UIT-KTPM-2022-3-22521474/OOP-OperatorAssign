#include<iostream>
using namespace std;

class CTime
{
private:
	int SS;
	int MM;
	int HH;
public:
	CTime& operator=(const CTime&);
	void Input();
	void Output();
};

CTime& CTime::operator=(const CTime& x)
{
	SS = x.SS;
	MM = x.MM;
	HH = x.HH;
	return *this;
}

void CTime::Input()
{
	cout << "Enter the hour: ";
	cin >> HH;
	cout << "Enter the minute: ";
	cin >> MM;
	cout << "Enter the second: ";
	cin >> SS;
}

void CTime::Output()
{
	cout << HH << ":" << MM << ":" << SS << ".";
}