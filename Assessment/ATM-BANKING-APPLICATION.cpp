//program to create basic ATM BANKING SYSTEM
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class ATM {
public:
    int pin;
    double balance, deposit;
    string name, address, location;

    // Constructor to initialize pin and balance
    ATM(int n, double m) {
        pin = n;
        balance = m;
    }

    // Display the welcome screen with current date
    void displayWelcomeScreen() {
        time_t now = time(0);
        char* date = ctime(&now);

        cout << "=======================WELCOME TO ATM=======================\n\n";
        cout << "\t           ----------------------\n\n";
        cout << "\t   Current date: " << date << "\n";
        cout << "\t           ----------------------\n";
    }

    // Display the header for account deposit system
    void display() {
        cout << "=======================ATM ACCOUNT DEPOSIT SYSTEM=======================\n\n";
    }

    // Display the account information
    void displaymain() {
        cout << "The name of the account holder: " << name << "\n";
        cout << "Account holder address: " << address << "\n";
        cout << "The branch location: " << location << "\n";
        cout << "Account balance: " << balance << "\n";
    }

    // Perform deposit operation
    void displaydeposit() {
        cout << "Available balance: Rs. " << balance << "\n";
        cout << "Enter amount to be deposited: ";
        cin >> deposit;
        balance += deposit;
        cout << "Your new available balance: " << balance << "\n";
    }
};

class Withdraw : public ATM {
public:
    Withdraw(int n, double m, string a, string b, string c) : ATM(n, m) {
        name = a;
        address = b;
        location = c;
    }

    // Perform withdrawal operation
    void withdrawAmount() {
        double withdraw;
        cout << "Enter amount to withdraw: ";
        cin >> withdraw;

        if (balance < withdraw) {
            cout << "=======================ATM ACCOUNT WITHDRAW SYSTEM=======================\n\n";
            ATM::displaymain();
            cout << "Insufficient balance in your account.\n";
            cout << "Sorry!!";
        }
        else {
            cout << "=======================ATM ACCOUNT WITHDRAW SYSTEM=======================\n\n";
            balance -= withdraw;
            ATM::displaymain();
            cout << "After withdrawal, new balance in account: " << balance << "\n";
        }
    }

    // Display the account balance
    void displayBalance() {
        cout << "=======================ATM ACCOUNT BALANCE DISPLAY SYSTEM=======================\n\n";
        ATM::displaymain();
        cout << "Your balance in account: " << balance << "\n";
    }
};

int main() {
    // Create an instance of the Withdraw class
    Withdraw withdraw(12345, 20000, "Akash Patel", "Mumbai", "Andheri");
    withdraw.displayWelcomeScreen();

    cout << "Press 1 and then press enter to access your account via pin number\n";
    cout << "                             or                                   \n";
    cout << "Press 0 and press enter to get help.\n";
    cout << "Enter your choice: ";
    int select;
    cin >> select;

    if (select == 1) {
        cout << "=======================ATM ACCOUNT ACCESS=======================\n\n";
        cout << "Enter your pin access number! [Only one attempt is allowed]: ";
        int atm_pin;
        cin >> atm_pin;

        if (withdraw.pin == atm_pin) {
            cout << "=======================ATM MAIN MENU SCREEN=======================\n\n";
            cout << "               Enter [1] to deposit cash\n";
            cout << "               Enter [2] to withdraw cash\n";
            cout << "               Enter [3] to balance inquiry\n";
            cout << "               Enter [0] to exit ATM\n";

            while (true) {
                cout << "Select any option from the menu: ";
                cin >> select;

                if (select == 0) {
                    cout << "You have been successfully logged out\n";
                    break;
                }

                switch (select) {
                case 1:
                    withdraw.display();
                    withdraw.displaymain();
                    withdraw.displaydeposit();
                    break;

                case 2:
                    withdraw.withdrawAmount();
                    break;

                case 3:
                    withdraw.displayBalance();
                    break;

                default:
                    break;
                }
            }
        }
        else {
            cout << "=======================THANK YOU=======================\n\n";
            cout << "You had made your attempt which failed!!! No more attempts allowed! Sorry!\n";
        }
    }
    else if (select == 0) {
        cout << "=======================ATM ACCOUNT STATUS=======================\n\n";
        cout << "You must have the correct pin number to access this account. See your\n";
        cout << "bank representative for assistance during bank opening hours.\n";
        cout << "Thanks for your choice\n";
    }

    return 0;
}

