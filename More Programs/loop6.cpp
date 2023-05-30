//program to print sum of 1+x+x^2/2!+...
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float n,x,i,sum=1.0,term=1.0;
    cout<<"enter x:";
    cin>>x;

    cout<<"enter nth term:";
    cin>>n;
    float k=1;
    for(i=1;i<=n;i++) {
        k=k*i;
        term=term*(pow(x,i)/(k*i));
        sum=sum+term;
    }
    cout<<"the sum is: "<<sum;
    return 0;
}