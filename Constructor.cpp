#include<iostream>
using namespace std;

class Circle
{
	public:
		int radius;
		Circle();
		Circle(int size);
		double getArea();
};

Circle::Circle()
{
	radius = 1;
}
Circle::Circle(int size)
{
	radius = size;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout<<"donut의 반지름은"<<donut.radius<<"입니다"<<endl;
	cout<<"donut의 면적은"<<area<<"입니다"<<endl;
	
	Circle pizza(2);
	area = pizza.getArea();
	cout<<"pizza의 반지름은"<<pizza.radius<<"입니다"<<endl;
	cout<<"pizza의 면적은"<<area<<"입니다"<<endl; 
}
