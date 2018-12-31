#include<iostream>
#include<string>

using namespace std;

int main(){
	cout << "Insert text!! "<<endl;
	string str;
	getline(cin,str,'&');
	cin.ignore();
	
	string f, r;
	cout<<endl<<"find : ";
	getline(cin,f,'\n');
	cout<<endl<<"replace : ";
	getline(cin,r,'\n');
	cout<<endl;
	
	int start_index = 0;
	while(true){
		int end_index = str.find(f,start_index);
		if(end_index == -1)
			break;
		str.replace(end_index, f.length(), r);
		start_index += r.length();
	}
	cout<<str<<endl;
	return 0;
}
