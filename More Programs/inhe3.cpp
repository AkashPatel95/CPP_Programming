//program to display fueltype of a car using inheritance
#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    public:
    string fueltype;
    void input(string c) {
        fueltype=c;
    }
};
class Car:public Vehicle {
    public:
    string displayfueltype() {
        cout<<"fueltype is: "<<fueltype;
    }
};
int main() {
    Car obj;
    string ft;
    cout<<"enter a fuel type: ";
    cin>>ft;
    obj.input(ft);
    obj.displayfueltype();


    return 0;
}