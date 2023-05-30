#include<iostream>
using namespace std;

class Shape {
    private:
     double square;
    public:
  
    double area;
   
    double getarea() {
    cout<<"enter radius: ";
    cin>>square;
       
        area=square*square;
        return area;
    }
    void display() {
        cout<<"area of shape: "<<area;
    }
};
class Triangle:public Shape {
    public:
    double base,height;
    void input1(double n1) {
        base=n1;
    }
    void input2(double n2) {
        height=n2;
            }
            double getarea() {
                return 0.5*base*height;
            }
};
int main() {
    Triangle t1;
    double base,height;
    
    
    cout<<"enter a base & height: ";
    cin>>base>>height;
    t1.input1(base);
    t1.input2(height);
    t1.display();
    double result=t1.getarea();

    cout<<"triangle : "<<result;


    return 0;
}