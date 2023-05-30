//program to do sum of series:1+11+111+...+n
#include<iostream>
using namespace std;

int main() {
    int n,sum=0,term=1,subsum=0;

    cout<<"enter n :";
    cin>>n;

    for(int i=1;i<=n;i++) {
        sum=0;
        sum=sum+term;
        term=term*10+1;
        subsum=subsum+sum;
    }
    cout<<"the sum of the series is: "<<subsum<<"\n";

    return 0;
}