#include<iostream>

using namespace std;

//cin.getline(char buf[], int size, char delimitChar)
// 저장배열, 사이즈, 마지막 구분 문자

int main()
{
	char buf[100];
	cout << "입력하세요" <<endl;
	cin.getline(buf,100,'\n');
	cout << buf;
	return 0;
 } 
