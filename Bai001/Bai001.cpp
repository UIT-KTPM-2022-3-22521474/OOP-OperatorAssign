#include <iostream>
using namespace std;

class C2DPoint
{
private:
	int x;
	int y;
public:
	void Input();
	void Output();
	C2DPoint& operator=(const C2DPoint&);
};

int main()
{
	cout << "Problem 01: Declare and define the assignment operators for 2D point class." << endl;
	C2DPoint p1{}, p2{};
	cout << "\nEnter the first 2D point:	";
	p1.Input();
	cout << "\nEnter the second 2D point:	";
	p2.Input();
	p1 = p2;
	cout << "\nAfter assign P2 to P1, the value of 2 points are:	P1 = " ;
	p1.Output();
	cout << ", P2 = ";
	p2.Output();
	cout << endl;
	return 1;
}

void C2DPoint::Input()
{
	cout << "\nEnter x:	";
	cin >> x;
	cout << "Enter y:	";
	cin >> y;
}

void C2DPoint::Output()
{
	cout << "(" << x << ", " << y << ")";
}

C2DPoint& C2DPoint::operator=(const C2DPoint& p)
{
	x = p.x;
	y = p.y;
	return *this;
}
