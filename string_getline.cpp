#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	// ���ڿ� song 
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;
	
	cout << song + "�� �θ� ������?" << endl;
	cout << "��Ʈ ù ���ڴ� "<< elvis[0] <<endl;
	
	getline(cin,singer);
	if(singer == elvis)
		cout << "�¾ҽ��ϴ�" <<endl;
	else
		cout << "Ʋ�Ƚ��ϴ�" <<endl; 
	return 0;
}
