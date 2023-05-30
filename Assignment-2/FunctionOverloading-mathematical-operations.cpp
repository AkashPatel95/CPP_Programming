//program to illustrate function overloading with operations like addition,subtraction,multiplication,division
#include<iostream> 
using namespace std;

//function overloading
int calculate(int a,int b) {
	cout<<"addition: "<<a+b<<"\n";
}

int calculate(int a,int b,int c) {
	cout<<"subtraction: "<<a-b-c<<"\n";
}

int calculate(int a,int b,double c) {
	cout<<"multiplication: "<<a*b*c<<"\n";
}

double calculate(double d,double e) {
	if(e!=0) {
	
	cout<<"division: "<<d/e<<"\n";
	
}

else {
	cout<<"can not divide by zero\n";
}
}
int main() {
		int a,b,c;
		double d,e;
		
		//input numbers to perform addition,subtraction,multiplication,division
		cout<<"enter five numbers: ";
		cin>>a>>b>>c>>d>>e;
		//Addition
		calculate(a,b);
		
		//Subtraction
		calculate(a,b,c);
		
		//multiplication
		calculate(a,b,0.5);
		
		//division
		calculate(d,e);
	return 0;
}
