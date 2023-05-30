//program to add two complex number
#include<iostream>
using namespace std;

class Complex {
    public:
    int re,im;
    void input() {
        cout<<"enter two numbers: ";
        cin>>re>>im;
    }
    void calculate(Complex c1,Complex c2) {
        re=c1.re+c2.re;
        im=c1.im+c2.im;
    }
    void display() {
        cout<<re<<"+"<<im<<"i\n";
    }

};
int main() {
    Complex c1,c2,c3;
    cout<<"first complex number: \n";
    c1.input();
    cout<<"second complex number: \n";
    c2.input();

    c3.calculate(c1,c2);
    cout<<"addition : ";
    c3.display();
    return 0;
}