//program to perform addition,subtraction,division,multiplication using constructor
#include<iostream>
using namespace std;
//class creation
class Constructor {
	public:

	//constructor creation and performing different operations	
	Constructor(int a,int b) {
		cout<<"addition :"<< a+b<<"\n";
		cout<<"subtraction :"<< a-b<<"\n";
		cout<<"multiplication :"<< a*b<<"\n";
		cout<<"division :"<< a/b<<"\n";
	}	
	
};
int main() {
	Constructor obj(20,10); //object creation and passing arguments

	return 0;
}
