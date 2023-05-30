//program to find area of rectangle using constructor and destructor
#include<iostream>
using namespace std;

class Rectangle {
    public:
    int length,width,area;
    
    Rectangle(int l,int w) {
        cout<<"constructor is called\n";
        length=l;
        width=w;
        area=length*width;
    }
    int display() {
        cout<<"area:"<<area;
    }
    ~Rectangle() {
        cout<<"destructor is called\n";
    }
};
int main() {
    int n1,n2;
    cout<<"enter length and width: ";
    cin>>n1>>n2;

    Rectangle rect(n1,n2);
    rect.display();
    return 0;
}