#include<iostream>
using namespace std;

class C2DPoint
{
private:
	float x;
	float y;
public:
	void Input();
	void Output();
};

void C2DPoint::Input()
{
	cout << "Enter point's x:	";
	cin >> x;
	cout << "Enter point's y:	";
	cin >> y;
}

void C2DPoint::Output()
{
	cout << "(" << x << ", " << y << ")";
}