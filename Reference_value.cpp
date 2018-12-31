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

// Reference value
void readRadius(Circle &c){
	cout<<"Plz give me Radius :";
	int r;
	cin>>r;
	c.setRadius(r);
}
void printArea(Circle &c){
	cout<<"Area is "<<c.getArea()<<endl;
}
int main(){
	Circle donut;
	readRadius(donut);	// Send to readRadius function, only donut's space
	printArea(donut);	// Send to printArea function, only donut's space
	cout<<"Program end"<<endl;
	return 0;
}
