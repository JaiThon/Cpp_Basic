#include<iostream>

namespace BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout<<"Bestcom�� ������ �Լ�"<<std::endl;
	}
 } 
 namespace ProgComImp1
 {
 	void SimpleFunc(void)
 	{
 		std::cout<<"ProgCom�� ������ �Լ�"<<std::endl;
	}
 }
 
 // ���� ���� ������ ::
 // �ٸ� namespace���� ���� �̸� �Լ�
 // ������ �����ϴ�. 
 int main(void)
 {
 	BestComImp1::SimpleFunc();
 	ProgComImp1::SimpleFunc();
 }
