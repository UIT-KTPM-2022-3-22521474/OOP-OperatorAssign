#include<iostream>
using namespace std;

class C3DPoint
{
private:
	float x;
	float y;
	float z;
public:
	void Input();
	void Output();
};

void C3DPoint::Input()
{
	cout << "Enter centerpoint's x:		";
	cin >> x;
	cout << "Enter centerpoint's y:		";
	cin >> y;
	cout << "Enter centerpoint's z:		";
	cin >> z;
}

void C3DPoint::Output()
{
	cout << "(" << x << ", " << y << ", " << z << ")";
}