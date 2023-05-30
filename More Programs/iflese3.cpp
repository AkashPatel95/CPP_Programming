#include<iostream>
using namespace std;

int main() {
    int n1,n2,n3;
    cout<<"enter n1:";
    cin>>n1;
    cout<<"enter n2:";
    cin>>n2;
    cout<<"enter n3:";
    cin>>n3;

    if(n1>n2) {
        if(n1>n3) {
            cout<<"n1 is bigger";
        }
    }
    else if(n2>n3) {
        cout<<"n2 is bigger";
    }
    else {
        cout<<"n3 is bigger";
    }
    return 0;
}