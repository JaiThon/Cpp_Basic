#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int start_point = 0;
	int result = 0;
	cout<<"Insert like 2+3+4"<<endl;
	getline(cin,str,'\n');
	
	while(true){
		int end_point = str.find('+', start_point); // start_point부터 + 있는 인덱스 검사 
		if(end_point == -1)	{
			result += stoi(str.substr(start_point));
			break;
		}
		result += stoi(str.substr(start_point, end_point));
		start_point = end_point + 1;
	}
	cout<<result<<endl;
}
