#include<iostream>
using namespace std;

class Rectangle
{
	public:
		int width;
		int height;
		Rectangle();
		Rectangle(int w, int h);
		Rectangle(int length);
		void isSquare();	
};

// 0차원의 점 
Rectangle::Rectangle(){
	width = 0;
	height = -1;
}
// 단순한 1차원 선 
Rectangle::Rectangle(int length){
	height = length;
	width = 0;
}
// 2차원인 사각형 
Rectangle::Rectangle(int w, int h){
	width = w;
	height = h;
}
void Rectangle::isSquare(){
	if(width == height)
		cout<<"정사각형입니다"<<endl;
	else
		cout<<"정사각형이 아닙니다"<<endl;
	return;
}
int main(){
	Rectangle rect1;
	Rectangle rect2(3);
	Rectangle rect3(4,3);
	Rectangle rect4(4,4);
	
	rect1.isSquare();
	rect2.isSquare();
	rect3.isSquare();
	rect4.isSquare();
}
