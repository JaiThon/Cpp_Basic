#include<iostream>
#include "Circle.h" // Circle.h ������� �ۼ� -> ȣ��
using namespace std;


Circle::Circle(){
	radius = 1;
} 
Circle::Circle(int n){
	radius = n;
}
double Circle::getArea(){
	return 3.14 * radius * radius;
}
