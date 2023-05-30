//program to decide greatest between 3 numbers defining function in a class
#include<iostream>
using namespace std;

class biggest {
    public:
    int n1,n2,n3;
    void input() {
        cout<<"enter three nu:";
        cin>>n1>>n2>>n3;
    }
    void calculate() {
        if(n1>n2) {
            if(n1>n3) {
                cout<<n1<<" is greatest\n";
            }
        }
        else if(n2>n3) {
            cout<<n2<<" is greatest\n";

        }
        else {
            cout<<n3<<" is greatest\n";
        }
    }
};
int main() {

    biggest object;
    object.input();
    object.calculate();
    return 0;
}