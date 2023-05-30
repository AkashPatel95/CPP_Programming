//print fibonacci series
#include<iostream>
using namespace std;

int main() {
    int n,p1=0,p2=1,p3;
    cout<<"enter term you want to print series:";
    cin>>n;

    cout<<"the fibonacci series :";
    cout<<p1<<" "<<p2;
    for(int i=3;i<=n;i++) {
        p3=p1+p2;
        cout<< p3;
        p1=p2;
        p2=p3;
    }
    return 0;
}