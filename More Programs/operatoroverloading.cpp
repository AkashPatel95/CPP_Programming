//program to illustrate operator overloading
#include<iostream>
using namespace std;

class Vector {
    public:
    int x,y;

    Vector(int a, int b) {
        x=a;
        y=b;
    }
    Vector operator+(Vector v2) {
       int v3X=x+v2.x;
       int v3Y=y+v2.y;

       x=v3X;
       y=v3Y;

        return Vector(x,y);
    }
    void display() {
        cout<<"vector: ("<<x<<","<<y<<")\n";
    }
};
int main() {
    Vector v1(3,3);
    Vector v2(3,3);
    Vector v3=v1+v2;
    v3.display();

    return 0;
}