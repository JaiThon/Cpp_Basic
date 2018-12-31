#include<iostream>
using namespace std;

// Simple example of Destructor
// Global / local Constructor 
class Circle{
	public:
		int radius;
		Circle();			// 기본 생성자 
		Circle(int size);
		~Circle();			// 소멸자 (클래스당 1개) 
		double getArea();
};
inline Circle::Circle(){
	radius = 1;
	cout<<"반지름"<<radius<<"원이 생성"<<endl;
}
Circle::Circle(int size){
	radius = size;
	cout<<"반지름"<<radius<<"원이 생성"<<endl;
}
/*
 * 간단한 생성자나 함수를 inline화 시키면
 * 성능이 향상된다. 
 */ 
inline double Circle::getArea(){
	return 3.14*radius*radius;
}
Circle::~Circle(){
	cout<<"반지름"<<radius<<"원이 소멸"<<endl;
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

