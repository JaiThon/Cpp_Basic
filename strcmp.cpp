#include<iostream>
#include<cstring>

using namespace std;

bool check_psw(char[11]);

int main(void)
{
	char password[11]; // 10�ڸ��� psw (������ \0)
	cout<<"���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���"<<endl;
	
	while(true)
	{
		cout << "��ȣ:";
		cin >> password;
		if(strcmp(password,"cpp")==0)
		{
			cout<<"���α׷� ���� ����"<<endl;
			return 0;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�"<<endl;
	}
}
