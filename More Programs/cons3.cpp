//program to display date using constructor and destructor
#include<iostream>
using namespace std;

class Date {
    public:
    int d,m,y,date,month,year;
    Date(int d,int m,int y) {
        cout<<"constructor is called\n";
        date=d;
        month=m;
        year=y;

    }
    void display() {
        cout<<date<<"/"<<month<<"/"<<year<<"\n";
    }
    ~Date() {
        cout<<"destructor is called\n";
    }
};
int main() {
    int n1,n2,n3;
    cout<<"enter date,month and time: ";
    cin>>n1>>n2>>n3;

    Date obj(n1,n2,n3);
    obj.display();
    return 0;
}