#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std:: cout << num < ' ' << 'A';
	std:: cout << ' ' << 3.14 << std::endl;
	return 0;
	// std::endl 은 개행을 만든다.
	// 출력의 기본 구성은 std::cout << "1" << "2" << std::endl; 
}
