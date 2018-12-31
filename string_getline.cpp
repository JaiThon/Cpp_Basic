#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	// 문자열 song 
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;
	
	cout << song + "을 부른 가수는?" << endl;
	cout << "힌트 첫 글자는 "<< elvis[0] <<endl;
	
	getline(cin,singer);
	if(singer == elvis)
		cout << "맞았습니다" <<endl;
	else
		cout << "틀렸습니다" <<endl; 
	return 0;
}
