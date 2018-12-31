#include<iostream>
using namespace std;
#include "Calculator.h"
#include "Adder.h"

void Calculator::run(){
	cout<<"Insert two number"<<endl;
	int a, b;
	cin>>a>>b;
	Adder adder1(a,b);
	cout<<adder1.process()<<endl;
}
