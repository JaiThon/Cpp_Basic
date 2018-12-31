#include<iostream>
#include "Circle.h" // Circle.h 헤더파일 작성 -> 호출
using namespace std;

int main(){
	Circle donut;
	double area = donut.getArea();
	cout<<"donut's radius is "<<donut.radius<<endl;
	cout<<"donut's area is "<<area<<endl;
	return 0;
}
