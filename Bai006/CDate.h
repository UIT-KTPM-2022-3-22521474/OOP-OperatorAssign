#include<iostream>
using namespace std;

class CDate
{
private:
	int Date;
	int Month;
	int Year;
public:
	CDate& operator=(const CDate&);
	void Input();
	void Output();
};

CDate& CDate::operator=(const CDate& x)
{
	Date = x.Date;
	Month = x.Month;
	Year = x.Year;
	return *this;
}

void CDate::Input()
{
	cout << "Enter date: ";
	cin >> Date;
	cout << "Enter month: ";
	cin >> Month;
	cout << "Enter year: ";
	cin >> Year;
}

void CDate::Output()
{
	cout << Date << "/" << Month << "/" << Year << ".";
}