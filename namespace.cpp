#include<iostream>

namespace BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout<<"Bestcom이 정의한 함수"<<std::endl;
	}
 } 
 namespace ProgComImp1
 {
 	void SimpleFunc(void)
 	{
 		std::cout<<"ProgCom이 정의한 함수"<<std::endl;
	}
 }
 
 // 범위 저정 연산자 ::
 // 다른 namespace에서 같은 이름 함수
 // 구현이 가능하다. 
 int main(void)
 {
 	BestComImp1::SimpleFunc();
 	ProgComImp1::SimpleFunc();
 }
