//program to illustrate multi-level inheritance
#include<iostream>
using namespace std;

class Account{
    public:
    int principal;

    
        void display_balance() {
            cout<<"enter ammount: ";
            cin>>principal;
            cout<<"your current balance is : "<<principal<<" Rs.\n";
        }

};
class SavingsAccount:public Account{
    public:
        double interest,rate=12.0,time;
        void calculate_interest() {
            cout<<"enter time in years: ";
            cin>>time;
            interest=(principal*rate*time)/100;
            cout<<"Interest is: "<<interest<<"\n";
        }
};
class CurrentAccount:public SavingsAccount {
    public:
       int fees=250,remaining_ammount;

        void deduct_fees() {
            remaining_ammount=principal-fees;
            cout<<"remaining ammount is: "<<remaining_ammount<<"\n";
        }

};
int main() {
    Account account;
    SavingsAccount savingsaccount;
    CurrentAccount currentaccount;

    account.display_balance();
    savingsaccount.display_balance();
    savingsaccount.calculate_interest();
    currentaccount.display_balance();
    currentaccount.calculate_interest();
    currentaccount.deduct_fees();
    return 0;
}