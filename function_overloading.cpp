#include<iostream>

/*
 *	같은 함수 이름, 다른 인자 -> 오버로딩
 *  하지만, 반환형만 차이가 있는 경우는 
 *  불가능 
 */
int func(int num){
	std::cout<<num<<std::endl;
	return num;
}

int func(int num1,int num2){
	std::cout<<num1+num2<<std::endl;
	return num1+num2;
}

int main(void)
{
	int num1, num2;
	
	std::cin>>num1>>num2;
	
	std::cout<<func(num1)<<std::endl;
	std::cout<<func(num1,num2)<<std::endl;
}
