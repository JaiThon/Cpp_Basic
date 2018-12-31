#include<iostream>
#include<string>
using namespace std;

int main(){
	string* str = new string("C++");
	str->append(", it is so wonderful thing!!");
	cout<<*str<<endl;
	delete str;
	return 0;
}
