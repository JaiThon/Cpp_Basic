#include<iostream>

using namespace std;

int main(){
	int result = 0;
	int size = 0;
	cout<<"���ϱ� ���α׷� size"<<endl;
	cin >> size;
	
	// C�� �ٸ��� int i ���� 
	for(int i =1; i <= size; i++){
		result += i;	
	}
	cout<<result<<endl;
}
