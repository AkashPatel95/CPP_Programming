//sum of the series:x-x^3+x^5-x^7+x^8....x^n
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,x,sum=0;

    cout<<"enter x:";
    cin>>x;
    cout<<"enter nth term:";
    cin>>n;

    for(int i=1;i<=n;i++) {
        if(i%2==0) {
            sum=sum-pow(x,2*i-1);
        }
        else {
            sum=sum+pow(x,2*i-1);
        }
    }
    cout<<"the sum of the series is: "<<sum;
    return 0;
}