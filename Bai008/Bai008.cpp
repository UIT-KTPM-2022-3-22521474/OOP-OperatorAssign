#include "CMonomial.h"

int main()
{
	cout << "Project 007 - 22521474 - BT_OOP_W5" << endl;
	CMonomial a, b;
	cout << "\nEnter the monomial which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted monomial is:	";
	a.Output();
	cout << "\nThe assigned monomial is:	";
	b.Output();
	cout << endl;
	return 1;
}