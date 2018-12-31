#include<iostream>
using namespace std;

class Circle{
	private:
		int radius;
	public:
		Circle(){
			radius = 1;
		}
		Circle(int radius){
			this->radius = radius;
		}
		void setRadius(int r){
			this->radius = r;
		}
		double getArea(){
			return 3.14*radius*radius;
		}
};

// Return function : Circle object
Circle getCircle(){
	Circle tmp(30);
	return tmp;
}
int main(){
	Circle c;
	cout<<c.getArea()<<endl;
	
	c = getCircle();	// Now c's radius = 30;
	cout<<c.getArea()<<endl;
}
