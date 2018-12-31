#include<iostream>
#define SIZE 100
using namespace std;

int main(void){
	int i;
	int num1 = 0;
	
	int &num2 = num1;
	
	cout<<num1<<endl;
	cout<<num2<<endl;
	
	for(i=0; i <= SIZE; i++)
		num1 += i;
	
	cout<<num1<<endl;
	cout<<num2<<endl;
}
