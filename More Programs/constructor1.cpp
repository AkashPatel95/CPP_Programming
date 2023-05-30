//program to calculate volume of a cube
#include<iostream>
using namespace std;

class cube {
    public:
    double side;
    double volume;
   
    cube(double side) {
        cout<<"constructor is called\n";
        volume=side*side*side;
        cout<<volume<<"\n";
    }
    cube() {
        cout<<"default constructor is called\n";
    }
    ~cube() {
        cout<<"destructor is called\n";
    }
};
int main() {
    cube c1(21.5);
    cube c2;
    
    
    
    return 0;
}