//program to find square of float and integer using inline function
#include<iostream>
using namespace std;

class Square {
    public:
    int n,result1;
    float f,result2;
     void input();
     void calculate();
     void display();
};

inline void Square::input() {
    cout<<"enter n: ";
    cin>>n;

    cout<<"enter f: ";
    cin>>f;
}

inline void Square::calculate() {
    result1=n*n;
    result2=f*f;
}

inline void Square::display() {
    cout<<"square of integer: "<<result1<<"\n";
    cout<<"square of float: "<<result2<<"\n";
}
int main() {
    Square s;
    s.input();
    s.calculate();
    s.display();

    return 0;
}