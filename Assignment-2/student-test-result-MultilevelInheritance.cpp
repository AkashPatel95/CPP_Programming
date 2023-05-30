//program to illustrate multilevel inheritance
#include<iostream>
using namespace std;
//student class
class Student {
	public:
		int roll_no;
		//member function to store and display roll number
		void input() {
			cout<<"enter a roll number: ";
			cin>>roll_no;
		}
		void display() {
			cout<<"Roll number: "<<roll_no<<"\n";
		}
};
//test class
class Test:public Student {
	public:
		int science,math;
		//member function to store marks and display
		void input() {
			cout<<"enter a marks of science and math: ";
			cin>>science>>math;
		}
		void display() {
			cout<<"Science marks: "<<science<<"\n";
			cout<<"Math marks: "<<math<<"\n";
		}
};
//result class
class Result:public Test {
	public:
		int total_marks;
		//input 
		void input() {
			Student::input();//calling input function of student class
			Test::input();//calling input function of test class
		}
		void calculate() {
			Student::display();//calling display function of student class
			Test::display();//calling display function of test class
			total_marks=science + math;
			cout<<"total marks: "<<total_marks<<"\n";
		}
};
int main() {
		//object creation
		Result result;
		result.input();  //calling input function by object
		result.calculate();  //calling calculate function by object
	return 0;
}
