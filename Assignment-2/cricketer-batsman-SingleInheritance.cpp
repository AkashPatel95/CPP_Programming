//program to illustrate single inheritance
#include<iostream>
#include<string>
using namespace std;

//creating cricketer class
class Cricketer {
	public:
		string Batsman_name;
		
	//input and display function
		void input(string name) {
			Batsman_name=name;
		}
		
		void display() {
			cout<<"Name: "<<Batsman_name<<"\n";
		}
};
//creating batsman class that inherit from cricketer class
class Batsman:public Cricketer {
	public:
		int totalruns,bestperformance; //declaring variables
		double averageruns;
	
		//input function
		void input(string name,int total_runs,int best_performance) {
			Cricketer::input(name);
			totalruns=total_runs;
			bestperformance=best_performance;
		}
		//function to calculate average
		void average() {
			averageruns=totalruns/5; //assuming there are total 5 matches played
		}
		//display function to display all information
		void display() {
			Cricketer::display();
			cout<<"Total run: "<<totalruns<<"\n";
			cout<<"Average run: "<<averageruns<<"\n";
			cout<<"Best performance: "<<bestperformance<<"\n";
		}
};
int main() {
		Batsman batsman; //creating object 
		batsman.input("Sachin",18426,200); //passing arguments to the child class function
		//calling functions
		batsman.average();
		batsman.display();
	return 0;
}
