#include<iostream>

using namespace std;
/*
 * Call By Reference
 * ���, Null ���� �Ұ��� 
 */ 
int main(void)
{
	int num1 = 1020;
	// num2�� num1�� �����Ѵ�.
	int &num2 = num1; 
	
	num2= 3047;
	
	cout <<"VAL: "<<num1<<endl;
	cout <<"REF: "<<num2<<endl;
	
	cout<<"VAL: "<<&num1<<endl;
	cout<<"REF: "<<&num2<<endl;
	return 0;
}
