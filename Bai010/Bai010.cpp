#include "CCircle.h"

int main()
{
	cout << "Project 010 - 22521474 - BT_OOP_W5" << endl;
	CCircle a, b;
	cout << "\nEnter the circle which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted circle's information:";
	a.Output();
	cout << "\n\nThe assigned circle's information:";
	b.Output();
	cout << endl;
	return 1;
}