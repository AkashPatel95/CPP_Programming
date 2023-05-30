//program to create a simple calculator using a class
#include<iostream>
using namespace std;

//creating a class
class Calculator {
	public:
		int num1,num2; //data members
		
		//function to take two input numbers
		void input() {
			cout<<"enter two numbers: ";
			cin>>num1>>num2;
		}
		
		//addition function
		void addition() {
			cout<<"Addition: "<<num1+num2<<"\n";
		}
		
		//subtraction function
		void subtraction() {
			cout<<"Subtraction: "<<num1-num2<<"\n";
		}
		
		//multiplication function
		void multiplication() {
			cout<<"multiplication: "<<num1*num2<<"\n";
		}
		
		//division function
		void division() {
			if(num2!=0) {
				cout<<"Division: "<<num1/num2<<"\n";
			}
			else {
				cout<<"cannot divide by zero\n";
			}
			
		}
		
		//modulo function
		void modulo() {
			cout<<"Modulo: "<<num1%num2<<"\n";
		}
};
int main() {
	Calculator obj;//creation of an object
	
	//calling different function from class using object
	obj.input();
	obj.addition();
	obj.subtraction();
	obj.multiplication();
	obj.division();
	obj.modulo();
	return 0;
}
