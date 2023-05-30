//program to illustrate multiple inheritance
#include<iostream>
using namespace std;

class User {
    public:
        void login() {
            cout<<"you are logging in\n";
        }
};
class Customer:virtual public User {
    public:
        void add_to_cart() {
            cout<<"Item added to a cart\n";
        }

};
class Seller:virtual public User {
    public:
        void list_item() {
            cout<<"listed an item for sale\n";
        }
};
class PrimeCustomer:public Customer,public Seller {
    public:
        void get_free_shiping() {
            cout<<"you are getting a free shiping\n";
        }
};
int main() {
    User user;
    Customer customer;
    Seller seller;
    PrimeCustomer primecustomer;

    user.login();
    customer.login();
    customer.add_to_cart();

    seller.login();
    seller.list_item();

    primecustomer.login();
    primecustomer.add_to_cart();
    primecustomer.list_item();
    primecustomer.get_free_shiping();
    return 0;
}