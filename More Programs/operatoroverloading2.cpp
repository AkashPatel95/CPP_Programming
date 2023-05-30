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
    Complex operator +(const Complex& other) {
        int realX=real+other.real;
        int imgY=img+other.img;
        real=realX;
        img=imgY;
        return Complex(real,img);
    }
    void display() {
        cout<<"complex no   ("<<real<<"+"<<img<<"i)\n";
    }
};
int main() {
    Complex c1(3,2);
    Complex c2(5,4);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}