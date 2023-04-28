#include "CComplexNumber.h"

int main()
{
	cout << "Project 005 - 22521474 - BT_OOP_W5" << endl;
	CComplexNumber a, b;
	cout << "\nEnter the complex number which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted complex number is:	";
	a.Output();
	cout << "\nThe assigned complex number is:	";
	b.Output();
	cout << endl;
	return 1;
}