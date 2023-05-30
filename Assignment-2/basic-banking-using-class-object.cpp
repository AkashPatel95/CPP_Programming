//basic banking using class and objects
#include<iostream>
#include<string>
using namespace std;

//class creation
class BankingSystem {
	public://data members creation
		string depositor;
		double account_no,amount,balance;
		string account_type;
		
		//function to assign values
		void assignvalues(string name,string accountType,double accountNo,double bal) {
				depositor=name;
				account_type=accountType;
				account_no=accountNo;
				balance=bal;
		}
		
		//function to deposit an ammout
		void deposit(double deposited_money) {
				amount=deposited_money;
				balance=balance+amount;
				cout<<"Account balance after money debited: "<<balance<<"\n";
		}
		
		//function to withdraw money and to check remaining balance
		void withdraw(double withdrawal_money) {
				amount=withdrawal_money;
				if(amount<=balance) {
					balance=balance-amount;
					cout<<"ammount withdrawn successfully\n"<<"your pending balance: "<<balance<<"\n";
				}
				else {
					cout<<"Insufficient balance\n";
				}
		}
		
		//function to display info
		void display_info() {
				cout<<"Depositor name: "<<depositor<<"\n";
				cout<<"Account type: "<<account_type<<"\n";
				cout<<"Account number: "<<account_no<<"\n";
				cout<<"Balance: "<<balance<<"\n";
		}
};
int main() {
	//creatig variables and taking inputs from user
	string depositor;
	double account_no,balance,deposit,withdraw;
	string account_type;
	
	cout<<"enter depositor name: ";
	getline(cin,depositor);
	
	cout<<"enter account type: ";
	getline(cin,account_type);
	
	cout<<"enter account number: ";
	cin>>account_no;
	
	cout<<"enter balance in account: ";
	cin>>balance;
	
	BankingSystem obj; //object created
	obj.assignvalues(depositor,account_type,account_no,balance); //passing variables as an arguments in class function
	
	cout<<"enter ammount to deposit: ";
	cin>>deposit;
	obj.deposit(deposit);
	
	cout<<"enter amount you want to withdraw: ";
	cin>>withdraw;
	obj.withdraw(withdraw); //calling withdraw function in class
	obj.display_info(); //calling display function in class
	return 0;
}
