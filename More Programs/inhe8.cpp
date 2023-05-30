//program to enter details for teacher and student(name,age,subject & name,age,grade) sequentially using inheritance
#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    int age;

    void setname(string n) {
        name=n;
    }
    void setage(int m) {
        age=m;
    }
    void displaydetails() {
        cout<<"name: "<<name<<"\n";
        cout<<"age: "<<age<<"\n";
    }
};
class Teacher:public Person {
    public:
    string sub;
    void setsubject(string o) {
        sub=o;
    }
    void displaydetails() {
        Person::displaydetails();
        cout<<"subject: "<<sub<<"\n";
    }

};
class Student:public Person {
    public:
    string grade;
    void setgrade(string p) {
        grade=p;
    }
    void displaydetails() {
        Person::displaydetails();
        cout<<"grade: "<<grade;
    }
};
int main() {
    string name,sub;
    int age;
    Teacher teacher;
    teacher.setname("Akash");
    teacher.setage(27);
    teacher.setsubject("physics");
    teacher.displaydetails();

    Student student;
    student.setname("Akash");
    student.setage(27);
    student.setgrade("A+");
    student.displaydetails();


    return 0;
}