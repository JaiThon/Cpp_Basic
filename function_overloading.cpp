#include<iostream>

/*
 *	���� �Լ� �̸�, �ٸ� ���� -> �����ε�
 *  ������, ��ȯ���� ���̰� �ִ� ���� 
 *  �Ұ��� 
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
