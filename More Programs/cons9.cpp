//program to enter student details by passing parameters to constructor and also write destructor
#include<iostream>
using namespace std;

class Info {
    public:
    int n1;
    string n2,n3;
    Info(int age,string name,string semester) {
        n1=age;
        n2=name;
        n3=semester;
    }
    void display() {
        cout<<"student age is: "<<n1<<"\n";
        cout<<"student name is: "<<n2<<"\n";
        cout<<"student semester is: "<<n3<<"\n";
    }
    ~Info() {
        cout<<"destructor is called\n";
    }
};
int main() {
    Info student(18,"Akash","sem-4");
    student.display();
    return 0;
}