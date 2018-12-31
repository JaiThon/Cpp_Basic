#include<iostream>
using namespace std;

class Circle{
	public:
		int radius;
	
	public:
		Circle(){
			radius = 1;
		}
		Circle(int size){
			radius = size;
		}
		void setRadius(int size){
			radius = size;
		}
		double getArea();
};
double Circle::getArea(){
	return 3.14*radius*radius;
}
int main(){
	Circle circleArray[3];
	for(int i =0; i < 3; i++){
		cout<<"input circle Radius :"<<endl;
		int size;
		cin>> size;
		circleArray[i].setRadius(size);
	}
	Circle* p;
	p = circleArray;
	for(int i =0; i <3; i++){
		cout<<"Circle number"<<i<<"s radius is "<<(
		
		p+i)->getArea()<<endl;
	}
	return 0;
}
