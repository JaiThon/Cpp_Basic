#include<iostream>

using namespace std;

int main(){
	int result = 0;
	int size = 0;
	cout<<"더하기 프로그램 size"<<endl;
	cin >> size;
	
	// C와 다르게 int i 가능 
	for(int i =1; i <= size; i++){
		result += i;	
	}
	cout<<result<<endl;
}
