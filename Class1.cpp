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
	cout<<"donut�� ��������"<<donut.radius<<"�Դϴ�"<<endl;
	cout<<"donut�� ������"<<area<<"�Դϴ�"<<endl;
	
	Circle pizza;
	pizza.radius = 2;
	area = pizza.getArea();
	cout<<"pizza�� ��������"<<pizza.radius<<"�Դϴ�"<<endl;
	cout<<"pizza�� ������"<<area<<"�Դϴ�"<<endl; 
}
