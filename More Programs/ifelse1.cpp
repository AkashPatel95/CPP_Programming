#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter a number:";
    cin>>num;

    if(num%2==0) {
        cout<<"given number is even\n";
    }
    else {
        cout<<"given number is odd\n";
    }
    return 0;
}