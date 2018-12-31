#include<iostream>
using namespace std;

class Circle{
	private:
		int radius;
	public:
		Circle();
		Circle(int r);
		~Circle();
		double getArea(){
			return 3.14 * radius * radius;
		}
		int getRadius(){
			return radius;
		}
		void setRadius(int radius){
			this->radius = radius;
		}
};
Circle::Circle(){
	radius = 1;
	cout<<"Constructor Start, Radius : "<<radius<<endl;
}
Circle::Circle(int r){
	radius = r;
	cout<<"Constructor Start, Radius : "<<radius<<endl;
}
Circle::~Circle(){
	cout<<"Destructor Start"<<endl;
}

// Call by Value
void increase(Circle c){	// copy
	int r = c.getRadius();	// r = c's radius
	c.setRadius(r+1);		// radius + 1
}							// Can't return : clear funct's value
int main(){
	Circle waffle(30);		// constructor
	increase(waffle);		// copy waffle object
	cout<<waffle.getRadius()<<endl;
	
	return 0;
}
