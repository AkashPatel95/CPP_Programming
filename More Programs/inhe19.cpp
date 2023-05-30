//program to illustrate hybrid inheritance
#include<iostream>
#include<string>
using namespace std;

class Employee {
    public:
    int emp_id;
    string name;

    Employee(string n1,int n2) {
        name=n1;
        emp_id=n2;
    }
    void get_details() {
        cout<<"name: "<<name<<"\n";
        cout<<"employee id: "<<emp_id<<"\n";
    }
};
class RegularEmployee:virtual public Employee {
    public:
    float salary;

    RegularEmployee(string n1,int n2,float n3):Employee(n1,n2) {
        salary=n3;
    }
    void get_details() {
        Employee::get_details();
        cout<<"salary of the regular employee: "<<salary<<"\n";
    }
};
class Manager:virtual public Employee {
    public:
    string department;

    Manager(string n1,int n2,string n3):Employee(n1,n2) {
        department=n3;
    }
    void manage_team() {
        Employee::get_details();
        cout<<"Managing team and department"<<department<<"\n";
    }
};
class TeamLeader:public RegularEmployee, public Manager {
    public:
    int team_size;

    TeamLeader(string n1,int n2,float n3,string n4,int n5):Employee(n1,n2),RegularEmployee(n1,n2,n3),Manager(n1,n2,n4) 
    {
        team_size=n5;
    }
    void lead_team() {
        Employee::get_details();
        cout<<"team leader is leading team of "<<team_size<<" person\n";
    }
};
int main() {
    Employee employee("AKASH",123);
    cout<<"details of the employee:\n";
    employee.get_details();

    RegularEmployee regularemployee("RAJ",321,50000);
    cout<<"\ndetails of the regular employee:\n";
    regularemployee.get_details();

    Manager manager("RAMESH",205,"coding");
    cout<<"\ndetails of the manager:\n";
    manager.get_details();
    
    TeamLeader teamleader("JASING",221,250000,"coding",32);
    cout<<"\ndetails of the teamleader: \n";
    teamleader.get_details();
    return 0;
}