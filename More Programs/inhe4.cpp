//program to print employee name,age and id using inheritance
#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    int age;
    void display1(string n1,int n2) {
        name=n1;
        age=n2;
    }
};
class Employee:public Person {
    public:
    int employeeid;
    void display2(int n3) {
        employeeid=n3;
        cout<<"Employees details: "<<"\n";
        cout<<name<<":"<<age<<":"<<employeeid;
    }
};
int main() {
    Employee emp;
    string name;
    int age,employeeid;

    cout<<"enter employee's name,age and id: ";
    cin>>name>>age>>employeeid;
    emp.display1(name,age);
    emp.display2(employeeid);
    return 0;
}