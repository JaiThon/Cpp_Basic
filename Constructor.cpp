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
	cout<<"donut�� ��������"<<donut.radius<<"�Դϴ�"<<endl;
	cout<<"donut�� ������"<<area<<"�Դϴ�"<<endl;
	
	Circle pizza(2);
	area = pizza.getArea();
	cout<<"pizza�� ��������"<<pizza.radius<<"�Դϴ�"<<endl;
	cout<<"pizza�� ������"<<area<<"�Դϴ�"<<endl; 
}
