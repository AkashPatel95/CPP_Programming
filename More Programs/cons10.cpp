//program to enter car details by passing parameters to constructor and also write destructor
#include<iostream>
using namespace std;

class Car {
    public:
    string n1,n2;
    int n3;

    Car(string name,string model,int price) {
        n1=name;
        n2=model;
        n3=price;
    }
    void display() {
        cout<<"car name: "<<n1<<"\n";
        cout<<"car model number: "<<n2<<"\n";
        cout<<"car price: "<<n3<<"\n";
    }
    ~Car() {
        cout<<"destructor is called\n";
    }
};
int main() {
    Car details("Audi","XL-25",10000000);
    details.display();
    return 0;
}