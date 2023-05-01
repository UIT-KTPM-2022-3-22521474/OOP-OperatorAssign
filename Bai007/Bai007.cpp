#include "CTime.h"

int main()
{
	cout << "Project 007 - 22521474 - BT_OOP_W5" << endl;
	CTime a, b;
	cout << "\nEnter the time which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted time is:	";
	a.Output();
	cout << "\nThe assigned time is:	";
	b.Output();
	cout << endl;
	return 1;
}