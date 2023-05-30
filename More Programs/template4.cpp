//program to add two numbers using function template
#include<iostream>
using namespace std;

template <class T>
T add(T n1,T n2) {
    cout<<"addition: "<<n1+n2;
}
int main() {
    int num1,num2;
    float f1,f2;

    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    add(num1,num2);
    cout<<"\n";

    cout<<"enter two float numbers:";
    cin>>f1>>f2;
    add(f1,f2);
    return 0;
}