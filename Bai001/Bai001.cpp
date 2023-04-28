#include "C2DPoint.h"

int main()
{
	cout << "Project 001 - 22521474 - BT_OOP_W5" << endl;
	C2DPoint a, b;
	cout << "\nEnter the point which you need to assign:" << endl;
	a.Input();
	b = a;
	cout << "\nThe inputted point's coordinate:	";
	a.Output();
	cout << "\nThe assigned point's coordinate:	";
	b.Output();
	cout << endl;
	return 1;
}