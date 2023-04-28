#include<iostream>
using namespace std;

class C3DPoint
{
private:
	float x;
	float y;
	float z;
public:
	C3DPoint& operator=(const C3DPoint&);
	void Input();
	void Output();
};

void C3DPoint::Input()
{
	cout << "Enter x:	";
	cin >> x;
	cout << "Enter y:	";
	cin >> y;
	cout << "Enter z:	";
	cin >> z;
}

C3DPoint& C3DPoint::operator=(const C3DPoint& p)
{
	x = p.x;
	y = p.y;
	z = p.z;
	return *this;
}

void C3DPoint::Output()
{
	cout << "(" << x << ", " << y << ", " << z << ")";
}