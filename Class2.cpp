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
	cout<<"���ο� ���̸� �Է��ϼ���"<<endl;
	cin >> rect.width >> rect.height;
	cout<<"�簢���� ���� :"<<rect.getArea()<<endl;
	return 0;
}
