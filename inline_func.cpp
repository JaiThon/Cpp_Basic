#include<iostream>
// 매크로 함수의 장점과 단점을 향상
// inline 함수
// 모든 자료형에 응답하기 위해서는
// template을 사용 
inline int SQUARE(int x)
{
	return x * x;
 } 
 
 int main(void)
 {
 	std::cout << SQUARE(5) <<std::endl;
 	std::cout << SQUARE(12) <<std::endl;
 	return 0;
 }
