#include "CMixedNumber.h"

int main()
{
	cout << "Project 004 - 22521474 - BT_OOP_W5" << endl;
	CMixedNumber a, b;
	cout << "\nEnter the mixed number which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted mixed number is:	";
	a.Output();
	cout << "\nThe assigned mixed number is:	";
	b.Output();
	cout << endl;
	return 1;
}