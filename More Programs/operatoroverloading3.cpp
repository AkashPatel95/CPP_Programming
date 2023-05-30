//program to illustrate operator overloading
#include<iostream>
using namespace std;

class Complex {
    public:

    int real,img;
    Complex(int x,int y) {
        real=x;
        img=y;
    }
    Complex operator+(Complex c2) {
        int c3_real=real+c2.real;
        int c3_img=img+c2.img;
        real=c3_real;
        img=c3_img;
        return Complex(real,img);
    }
    void display() {
       cout<<"Complex: ("<<real<<"+"<<img<<"i)\n";
    }

};
int main() {
    Complex c1(3,2);
    Complex c2(2,2);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}