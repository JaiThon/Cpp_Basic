#include<iostream>

int Adder(int num1 = 1, int num2 = 2);

int main(void)
{
	std::cout<<Adder()<<std::endl;
	
	std::cout<<Adder(5)<<std::endl;
	// default 값으로 5가 num1에 채워진다.
	// default 값은 오른쪽부터 지정해야한다.
	 
	std::cout<<Adder(3,5)<<std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}
