#include "CSphere.h"

int main()
{
	cout << "Project 012 - 22521474 - BT_OOP_W5" << endl;
	CSphere a, b;
	cout << "\nEnter the sphere which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted sphere's information:";
	a.Output();
	cout << "\n\nThe assigned circle's information:";
	b.Output();
	cout << endl;
	return 1;
}