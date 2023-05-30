//program to illustrate multi-level inheritance
#include<iostream>
using namespace std;

class Shape {
    public:
    int side;
    double areaOfcircle;

    void area() {
        cout<<"enter a side: ";
        cin>>side;
        areaOfcircle=3.14*side*side;
        cout<<"Area of shape: "<<areaOfcircle<<"\n";
    }
};
class Rectangle:public Shape {
    public:
        int length,width,perimeterresult;
        void perimeter() {
            cout<<"enter width: ";
            cin>>width;
            length=side;
        perimeterresult=2*length*width;
        cout<<"perimeter: "<<perimeterresult<<"\n";
        }
};
class Square:public Rectangle {
    public:
    int SquareArea;
        void is_square() {
            if(length==width) {
                cout<<"shape is square\n";
            }
            else {
                cout<<"not a square\n";
            }
        }
};
int main() {
    Shape shape;
    Rectangle rectangle;
    Square square;

    shape.area();
    rectangle.area();
    rectangle.perimeter();
    square.area();
    square.perimeter();
    square.is_square();
    return 0;
}