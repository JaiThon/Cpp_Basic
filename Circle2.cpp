#include<iostream>
using namespace std;
#include "Circle2.h"
Circle::Circle(){
	radius = 1;
}
Circle::Circle(int n){
	radius = n;
}
double Circle::getArea(){
	return 3.14*radius*radius;
}
