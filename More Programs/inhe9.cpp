#include<iostream>
#include<string>
using namespace std;

class Employee {
    public:
    string name;
    int age,salary;
    void setname(string n) {
        name=n;
    }
    void setage(int m) {
        age=m;
    }
    void setsalary(int o) {
        salary=o;
    }
    void displaydetails() {
        cout<<"name: "<<name<<"\n";
        cout<<"age: "<<age<<"\n";
        cout<<"salary: "<<salary<<"\n";
    }
};
class Manager:public Employee {
    public:
    string department;
    void setdepartment(string p) {
        department=p;
    }
    void displaydetails() {
        Employee::displaydetails();
        cout<<"department: "<<department<<"\n";
    }

};
int main() {
    string name,department;
    int age,salary;
    Employee employee;
    employee.setname("AKASH");
    employee.setage(27);
    employee.setsalary(50000);
    employee.displaydetails();

    Manager manager;
    manager.setname("AKASH");
    manager.setage(27);
    manager.setsalary(50000);
    manager.setdepartment("Software");
    manager.displaydetails();


    return 0;
}