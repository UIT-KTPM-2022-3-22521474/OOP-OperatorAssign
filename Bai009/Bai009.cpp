#include "CLine.h"

int main()
{
	cout << "Project 009 - 22521474 - BT_OOP_W5" << endl;
	CLine l1, l2;
	cout << "\nEnter the line equation (ax + by + c = 0), which you need to assign:" << endl;
	l1.Input();
	l2 = l1;
	cout << "\nThe inputted line equation is:	";
	l1.Output();
	cout << "\nThe assigned line equation is:	";
	l2.Output();
	return 1;
}