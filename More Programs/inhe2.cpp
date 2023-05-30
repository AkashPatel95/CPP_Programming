//program to calculate rectangle area using inheritance
#include<iostream>
using namespace std;

class Shape {
    public:
    double width,height;
    void setvalue1(double n1) {
        width=n1;
        
    }
      void setvalue2(double n2) {
       height=n2;
        
    }
};
class Rectangle:public Shape {
    public:
    double getarea() {
        return width*height;
    }
};
int main() {
    Rectangle rect;
    double w,h;

    cout<<"enter width: ";
    cin>>w;
    rect.setvalue1(w);
    cout<<"enter height: ";
    cin>>h;
    rect.setvalue2(h);
    double Value=rect.getarea();
    cout<<"reactangle Value: "<<Value;

    return 0;
}