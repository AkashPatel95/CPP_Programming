//program to swap data using function template
#include<iostream>
using namespace std;

template <class T>
T swap(T *n1,T *n2) {
    T temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
   
}
int main() {
    int num1,num2,num;
    float f1,f2,f;
    char c1,c2,c;

    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    num=swap(&num1,&num2);
    cout<<"num1: "<<num1<<",num2: "<<num2<<"\n";

    cout<<"Enter two float numbers:";
    cin>>f1>>f2;
    f=swap(&f1,&f2);
    cout<<"f1: "<<f1<<",f2: "<<f2<<"\n";

    cout<<"Enter two characters:";
    cin>>c1>>c2;
    c=swap(&c1,&c2);
    cout<<"c1: "<<c1<<",c2: "<<c2<<"\n";

    return 0;
}