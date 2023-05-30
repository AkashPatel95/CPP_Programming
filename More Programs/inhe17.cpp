//program to illustrate hierarchical inheritance
#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public:
    string make,model;
    int year;
        Vehicle(string n1,string n2,int n3) {
            make=n1;
            model=n2;
            year=n3;
        }
        void display_info() {
            cout<<"make: "<<make<<"\n";
            cout<<"model: "<<model<<"\n";
            cout<<"year: "<<year<<"\n";

        }
};
class Car:public Vehicle {
    public:
        string color;
        int doors;

        Car(string n1,string n2,int n3,string n4,int n5):Vehicle(n1,n2,n3) {
            color=n4;
            doors=n5;
        }
        void display_info() {
            Vehicle::display_info();
            cout<<"color: "<<color<<"\n";
            cout<<"doors: "<<doors<<"\n";
        }
};
class Motorcycle:public Vehicle {
    public:
        string engine_cap,type;

        Motorcycle(string n1,string n2,int n3,string n4,string n5):Vehicle(n1,n2,n3) {
            engine_cap=n4;
            type=n5;
        }
        void display_info() {
            Vehicle::display_info(); 
            cout<<"engine capacity: "<<engine_cap<<"\n";
            cout<<"type: "<<type<<"\n";
        }

};
int main() {
    Vehicle vehicle("BMW","XS59",2022);
    cout<<"\nvehicle info: \n";
    vehicle.display_info();

    Car car("Audi","AWS5",2021,"burgendy",4);
    cout<<"\ncar info: \n";
    car.display_info();

    Motorcycle motorcycle("Honda","AD95",2020,"1850cc","petrol");
    cout<<"\nmotorcycle info: \n";
    motorcycle.display_info();


    return 0;
}