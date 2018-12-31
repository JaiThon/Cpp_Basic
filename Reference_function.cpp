#include<iostream>
using namespace std;

// Reference function 
char &find(char s[], int index){
	return s[index];
}

int main(){
	char name[] = "MIKE";
	cout<<name<<endl;
	
	find(name,0) = 'S';	// name[0] = "S"
	cout<<name<<endl;	// name = "SIKE"
	
	find(name,2) = 'T';	// name[2] = "T"
	cout<<name<<endl;	// name = "SITE"
	
	return 0;
}
