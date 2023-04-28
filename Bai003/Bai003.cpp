#include "CFraction.h"

int main()
{
	cout << "Project 003 - 22521474 - BT_OOP_W5" << endl;
	CFraction a, b;
	cout << "\nEnter the fraction which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted fraction is:	";
	a.Output();
	cout << "\nThe assigned fraction is:	";
	b.Output();
	cout << endl;
	return 1;
}