#include<iostream>
#include<cstring>

using namespace std;

bool check_psw(char[11]);

int main(void)
{
	char password[11]; // 10자리의 psw (마지막 \0)
	cout<<"프로그램을 종료하려면 암호를 입력하세요"<<endl;
	
	while(true)
	{
		cout << "암호:";
		cin >> password;
		if(strcmp(password,"cpp")==0)
		{
			cout<<"프로그램 정상 종료"<<endl;
			return 0;
		}
		else
			cout << "암호가 틀립니다"<<endl;
	}
}
