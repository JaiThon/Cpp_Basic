#include<iostream>
using namespace std;
#include "Adder.h"
// Adder cpp 
Adder::Adder(int a, int b){
	op1 = a;
	op2 = b;
}

int Adder::process(){
	cout<<"Adder run"<<endl;
	return op1 + op2;
}

