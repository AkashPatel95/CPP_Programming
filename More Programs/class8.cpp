//program to display entered date
#include<iostream>
using namespace std;

class Date {
    public:
    int d,m,y;

    void input() {
        cout<<"enter present day,month and year: ";
        cin>>d>>m>>y;
    }
    void display() {
        cout<<d<<"/"<<m<<"/"<<y<<"\n";
    }
};
int main() {
    Date d;
    d.input();
    cout<<"entered date is :";
    d.display();
    return 0;
}