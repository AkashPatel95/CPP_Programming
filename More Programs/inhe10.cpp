//program to illustrate multi-level inheritance
#include<iostream>
using namespace std;

class Vehicle {
    public:
        void drive() {
            cout<<"I am driving vehicle\n";
        }
};
class Car:public Vehicle {
    public:
        void honk() {
            cout<<"car is honking\n";
        }
};
class ElectricCar:public Car {
    public:
        void charge() {
            cout<<"I am charging the car\n";
        }
};
int main() {
    Vehicle vehicle;
    Car car;
    ElectricCar electriccar;
    vehicle.drive();
    car.honk();
    electriccar.charge();
    electriccar.drive();
    electriccar.honk();
    electriccar.charge();
    return 0;
}