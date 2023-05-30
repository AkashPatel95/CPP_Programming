//program to find largest among two numbers using function template
#include<iostream>
using namespace std;

template <class T>
T bigger(T n1,T n2) {
    if(n1>n2) {
        return n1;
    }
    else {
        return n2;
    }
}
int main() {
    int num1,num2,num;
    float f1,f2,f;
    char c1,c2,c;

    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    num=bigger(num1,num2);
    cout<<num<<" is bigger\n";

    cout<<"Enter two float numbers:";
    cin>>f1>>f2;
    f=bigger(f1,f2);
    cout<<f<<" is bigger\n";

    cout<<"Enter two characters:";
    cin>>c1>>c2;
    c=bigger(c1,c2);
    cout<<c<<" has the bigger ASCII value\n";
    return 0;
}