//program to override getarea() function using inheritance
#include<iostream>
using namespace std;

class Shape {
    public:
    int area,side;
   
    void getarea(int side) {
        area=side*side;
        cout<<"area is: "<<area<<"\n";
    }
};
class Circle:public Shape {
    public:
    void getarea(int side) {
        area=3.14*side*side;
        cout<<"circle area is : "<<area<<"\n";
    }
};
class Square:public Shape {
    public:
    void getarea(int side) {
        area=side*side;
        cout<<"square area is : "<<area;
    }
};
int main() {
    int side;
    cout<<"enter side: ";
    cin>>side;
    Circle obj1;
    Square obj2;
    obj1.getarea(side);
    obj2.getarea(side);
    return 0;
}