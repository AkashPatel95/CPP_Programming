//program to access protected data members using inheritance
#include<iostream>
using namespace std;

class Car1 {
    private:
    string n="mercedez";

    protected:
    string name,model;
    int year;

    public:
    void display1(string n1,string n2,int n3) {
        cout<<n1<<":"<<n2<<":"<<n3<<"\n";
    }
};
class Car2:public Car1 {
    public:
    string m1,m2;
    int m3;
    void display2(string m1,string m2,int m3) {
        name=m1;
        model=m2;
        year=m3;

        cout<<name<<":"<<model<<":"<<year<<"\n";
    }

};
int main() {
    Car2 obj;
    obj.display1("BMW","XL-5",2018);
    obj.display2("Audi","BW-9",2020);
    return 0;
}