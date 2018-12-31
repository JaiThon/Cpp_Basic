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

// 0������ �� 
Rectangle::Rectangle(){
	width = 0;
	height = -1;
}
// �ܼ��� 1���� �� 
Rectangle::Rectangle(int length){
	height = length;
	width = 0;
}
// 2������ �簢�� 
Rectangle::Rectangle(int w, int h){
	width = w;
	height = h;
}
void Rectangle::isSquare(){
	if(width == height)
		cout<<"���簢���Դϴ�"<<endl;
	else
		cout<<"���簢���� �ƴմϴ�"<<endl;
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
