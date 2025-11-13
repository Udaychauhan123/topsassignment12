#include<iostream>
using namespace std;
main(){
	int r1,a=5;
	float b=2.5;
	
	r1=a+b;
	cout<<"Implicit Conversion Result: " <<r1<<"\n";
	
	float r2=a+b;
	cout<<"Explicit Conversion Result: " <<r2<<"\n";
}
