//program to find factorial by defining function outside the class
#include<iostream>
using namespace std;

class Factorial {
    public:
    int calculate(int n);
};
int Factorial::calculate(int n) {
    int f=1;
    for(int i=1;i<=n;i++) {
        f=f*i;
    }
    cout<<"factorial is: "<<f;
}
int main() {
    Factorial fact;
    int n;
    cout<<"enter a number:";
    cin>>n;

    fact.calculate(n);
    return 0;
}