//program to build simple calculator using class template
#include<iostream>
using namespace std;

template <class T>
class Calculator {
    public:
    T num1,num2;

    Calculator(T n1,T n2) {
        num1=n1;
        num2=n2;
    }
    void addition() {
        cout<<"addition: "<<num1+num2<<"\n";
    }
    void subtraction() {
        cout<<"subtraction: "<<num1-num2<<"\n";
    }
    void multiplication() {
        cout<<"multiplication: "<<num1*num2<<"\n";
    }
    void division() {
        cout<<"division: "<<num1/num2<<"\n";
    }
    void modulo() {
        cout<<"modulo: "<<num1%num2<<"\n";
    }
};
int main() {
    int a=20,b=10;
    float c=20.0,d=10.0;
    Calculator<int> calci(20,10);
    calci.addition();
    calci.subtraction();
    calci.multiplication();
    calci.division();
    calci.modulo();
    cout<<"\n";
    Calculator<float> cal(20.0,10.0);
    cal.addition();
    cal.subtraction();
    cal.multiplication();
    cal.division();
    
    
    return 0;
}