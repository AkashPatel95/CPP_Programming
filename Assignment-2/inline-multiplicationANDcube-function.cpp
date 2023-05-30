//program to find multiplication and cubic values using inline function
#include<iostream>
using namespace std;

//inline function for multiplication
inline multiplication(int a,int b) {
	return a*b;
}

//inline function to find cube
inline cube(int num) {
	
	return num*num*num;
}
int main() {
	
	int x,y; //variable declaration
	cout<<"enter two values: ";
	cin>>x>>y;
	
	//calling inline multiplication function and printing output
	int multiplication_result=multiplication(x,y);
	cout<<"Multiplication: "<<multiplication_result<<"\n";
	
	//calling inline cube functions and printing outputs
	int cube_result=cube(x);
	cout<<"Cube of "<<x<<": "<<cube_result<<"\n";
	
	int cube_result1=cube(y);
	cout<<"Cube of "<<y<<": "<<cube_result1<<"\n";
	
	
	return 0;
}
