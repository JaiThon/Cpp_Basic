#include<iostream>
using namespace std;

// Simple example of Destructor
// Global / local Constructor 
class Circle{
	public:
		int radius;
		Circle();			// �⺻ ������ 
		Circle(int size);
		~Circle();			// �Ҹ��� (Ŭ������ 1��) 
		double getArea();
};
inline Circle::Circle(){
	radius = 1;
	cout<<"������"<<radius<<"���� ����"<<endl;
}
Circle::Circle(int size){
	radius = size;
	cout<<"������"<<radius<<"���� ����"<<endl;
}
/*
 * ������ �����ڳ� �Լ��� inlineȭ ��Ű��
 * ������ ���ȴ�. 
 */ 
inline double Circle::getArea(){
	return 3.14*radius*radius;
}
Circle::~Circle(){
	cout<<"������"<<radius<<"���� �Ҹ�"<<endl;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
	Circle fDonut(100);
	Circle fPizza(200);
}

int main(){
	Circle mainDonut;
	Circle mainPizza(30);
	f();
	return 0;
}

