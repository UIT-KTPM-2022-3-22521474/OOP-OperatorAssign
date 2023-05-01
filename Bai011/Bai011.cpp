#include "CTriangle.h"

int main()
{
	cout << "Project 011 - 22521474 - BT_OOP_W5" << endl;
	CTriangle a, b;
	cout << "\nEnter the triangle which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe 3 points' coordinates of the inputted triangle are: ";
	a.Output();
	cout << "\nThe 3 points' coordinates of the assigned triangle are: ";
	b.Output();
	cout << endl;
	return 1;
}