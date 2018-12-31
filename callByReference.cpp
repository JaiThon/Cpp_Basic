#include<iostream>

using namespace std;
/*
 * Call By Reference
 * 상수, Null 참조 불가능 
 */ 
int main(void)
{
	int num1 = 1020;
	// num2는 num1을 참조한다.
	int &num2 = num1; 
	
	num2= 3047;
	
	cout <<"VAL: "<<num1<<endl;
	cout <<"REF: "<<num2<<endl;
	
	cout<<"VAL: "<<&num1<<endl;
	cout<<"REF: "<<&num2<<endl;
	return 0;
}
