#include "CDate.h"

int main()
{
	cout << "Project 006 - 22521474 - BT_OOP_W5" << endl;
	CDate a, b;
	cout << "\nEnter the date which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted date is:	";
	a.Output();
	cout << "\nThe assigned date is:	";
	b.Output();
	cout << endl;
	return 1;
}