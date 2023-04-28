#include<iostream>
using namespace std;

class C2DPoint
{
private:
	float x;
	float y;
public:
	C2DPoint& operator=(const C2DPoint&);
	void Input();
	void Output();
};

void C2DPoint::Input()
{
	cout << "Enter x:	";
	cin >> x;
	cout << "Enter y:	";
	cin >> y;
}

C2DPoint& C2DPoint::operator=(const C2DPoint& p)
{
	x = p.x;
	y = p.y;
	return *this;
}

void C2DPoint::Output()
{
	cout << "(" << x << ", " << y << ")";
}