//program to illustrate hierarchical inheritance
#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string n1,int n2) {
            name=n1;
            age=n2;
        }

        void display_info() {
            cout<<"name: "<<name<<"\n";
            cout<<"age: "<<age<<"\n";
        }
};
class Student:public Person {
    public:
        int student_id;
        char grade;

        Student(string n1,int n2,int n3,char n4):Person(n1,n2) {
          
            student_id=n3;
            grade=n4;
        }
        void display_info() {
            Person::display_info();
            cout<<"student ID: "<<student_id<<"\n";
            cout<<"grade: "<<grade<<"\n";
        }
};
class Teacher:public Person {
    public:
        string subject;
        int experience;
            
            Teacher(string n1,int n2,string n3,int n4):Person(n1,n2) {
            
                subject=n3;
                experience=n4;
            }
        void display_info() {
            Person::display_info();
            cout<<"subject: "<<subject<<"\n";
            cout<<"experience: "<<experience<<" years\n";
        }
};
int main() {
    Person person("Akash",27);
    cout<<"person information: \n";
    person.display_info();

    Student student("Ravi",24,156,'A');
    cout<<"\nstudent information: \n";
    student.display_info();

    Teacher teacher("Arjun",23,"Physics",8);
    cout<<"\nteacher information: \n";
    teacher.display_info();

    return 0;
}