//program to illustrate inheritance
#include<iostream>
#include<string>
using namespace std;

//Person class created
class Person {
	public:
		string name;
		int age;
		//function to take and store input data
		void input() {
			cout<<"enter a name: ";
			cin>>name;
			cout<<"enter an age: ";
			cin>>age;
		}
		//function to display data
		void display() {
			cout<<"name: "<<name<<"\n";
			cout<<"age: "<<age<<"\n";
			
		}
		
};
//student class creation that inherits from class Person
class Student:public Person {
	public:
		float percentage;
		//function to take and store input data
		void input() {
			Person::input(); //calling input function from Person class
			cout<<"enter percentage: ";
			cin>>percentage;
		}
		
		//function to display data
		void display() {
			Person::display();//calling display function from Person class
			cout<<"percentage: "<<percentage<<"\n";
		}
		
};
//Teacher class creation that inherits from class Person
class Teacher:public Person {
	public:
		double salary;
		//function to take and store input data
		void input() {
			Person::input();  //calling input function from Person class
			cout<<"enter a salary: ";
			cin>>salary;
		}
		
		//function to display data
		void display() {
			Person::display(); //calling display function from Person class
			cout<<"salary of a tearcher: "<<salary<<"\n";
		}
};
int main() {
		//creating objects
		
		Student student;
		Teacher teacher;
		
		//calling input and display functions through student object
		cout<<"student information: \n";
		student.input();
		student.display();
		
		//calling input and display functions through student object
		cout<<"teacher information: \n";
		teacher.input();
		teacher.display();
	return 0;
}
