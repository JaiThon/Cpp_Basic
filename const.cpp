#include<iostream>

using namespace std;

int sum(int x = 0, int y = 0 );

int main(void){
	int num1 = 10;
	int num2 = 10;
	cout<<num1+num2<<endl;
	sum(num1, num2);
	cout<<num1+num2<<endl;
	return 0;
}

int sum(int num1, int num2) //const를 붙이면 수정이 불가능 
{
	num1 += 90;
	num2 += 90;
	
	cout<<num1+num2<<endl;
	return num1+num2;
}
