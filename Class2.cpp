#include<iostream>
using namespace std;

class Rectangle{
	public:
		int width;
		int height;
		int getArea();
};
int Rectangle::getArea()
{
	return width*height;
}
int main()
{
	Rectangle rect;
	cout<<"가로와 높이를 입력하세요"<<endl;
	cin >> rect.width >> rect.height;
	cout<<"사각형의 넓이 :"<<rect.getArea()<<endl;
	return 0;
}
