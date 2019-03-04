#include <iostream>
float pi=3.14159265;
using namespace std;
class Cylinder
{
	public:
	int r;
	int h;
	float calculateSurfaceArea();
	float calculateVolume();
};
float Cylinder::calculateSurfaceArea()
{
	return 2*pi*r*h+2*pi*r*r;
}
float Cylinder::calculateVolume()
{
	return pi*r*r*h;
}
int main()
{
	Cylinder cylinder; 
	cout<<"Height (h):";
	cin>>cylinder.h;
	cout<<"The radius of the base (r):";
	cin>>cylinder.r;
	cout<<"_ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Surface area (S):"<<cylinder.calculateSurfaceArea()<<endl;
	cout<<"Volume (V):"<<cylinder.calculateVolume()<<endl;
	return 0;
}
