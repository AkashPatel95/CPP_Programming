//program to illustrate hierarchical inheritance
#include<iostream>
#include<string>
using namespace std;

class Employee {
    public:
    string name;
    int employee_id,salary;

    Employee(string n1,int n2,int n3) {
        name=n1;
        employee_id=n2;
        salary=n3;
    }
    void calculatesalary() {
        cout<<"name: "<<name<<"\n";
        cout<<"employee id: "<<employee_id<<"\n";
        cout<<"salary: "<<salary<<"\n";
    }

};
class SalariedEmployee:public Employee {
    public:
    float monthlysalary;
    SalariedEmployee(string n1,int n2,int n3):Employee(n1,n2,n3) {
        monthlysalary=n3;
    }
    void calculatesalary() {
        Employee::calculatesalary();
        cout<<"monthlysalary: "<<monthlysalary<<"\n";
    }

};
class HourlyEmployee:public Employee {
    public:
    float hourlyrate;
    HourlyEmployee(string n1,int n2,int n3):Employee(n1,n2,n3) {
        hourlyrate=n3;
    }
    void calculatesalary() {
        Employee::calculatesalary();
        cout<<"hourly rate: "<<hourlyrate<<"\n";
    }

};

int main() {
    Employee employee("AKASH",123,5000000);
    cout<<"Employee info: ";
    employee.calculatesalary();

    SalariedEmployee salariedemployee("Raj",765,50000);
    cout<<"salaried employee info: \n";
    salariedemployee.calculatesalary();

    HourlyEmployee hourlyemployee("Vivek",365,100000);
    cout<<"Hourly employee info: \n";
    hourlyemployee.calculatesalary();


    return 0;
}