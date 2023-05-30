//program to reverse by defining function outside class
#include<iostream>
using namespace std;

class Reverse {
    public:
    int n;
    void input();
    void calculate();
};
void Reverse::input() {
    cout<<"enter a number: ";
    cin>>n;
}
void Reverse::calculate() {
    int rem,rev=0;
    for(int i=1;n>0;i++) {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"The updated number is: "<<rev;
}

int main() {
    Reverse obj;
    obj.input();
    obj.calculate();
    return 0;
}