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

// Call by address
// radius = radius + 1;
void increase(Circle *c){	// get address of c
	int r = c->getRadius();	// get radius using c's address
	c->setRadius(r+1);		// radius + 1 
}
int main(){
	Circle waffle(30);		// constructor : radius = 30
	increase(&waffle);		// send to increase function : waffle's address
	cout<<waffle.getRadius()<<endl;
	
	return 0;
}
