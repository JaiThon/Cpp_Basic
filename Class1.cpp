#include<iostream>
using namespace std;

class Circle
{
	public:
		int radius;
		double getArea();
};

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main()
{
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout<<"donut의 반지름은"<<donut.radius<<"입니다"<<endl;
	cout<<"donut의 면적은"<<area<<"입니다"<<endl;
	
	Circle pizza;
	pizza.radius = 2;
	area = pizza.getArea();
	cout<<"pizza의 반지름은"<<pizza.radius<<"입니다"<<endl;
	cout<<"pizza의 면적은"<<area<<"입니다"<<endl; 
}
