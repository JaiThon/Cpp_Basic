#include<iostream>

using namespace std;

//cin.getline(char buf[], int size, char delimitChar)
// ����迭, ������, ������ ���� ����

int main()
{
	char buf[100];
	cout << "�Է��ϼ���" <<endl;
	cin.getline(buf,100,'\n');
	cout << buf;
	return 0;
 } 
