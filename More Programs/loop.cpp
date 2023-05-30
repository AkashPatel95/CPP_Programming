//sum of nth harmonic series
#include<iostream>
using namespace std;

int main() {
   float n,sum=0.0;

    cout<<"enter nth term:";
    cin>>n;

    for(float i=1;i==1;i++) {
        for(float j=1;j<=n;j++) {
            sum=sum+(i/j);
        }
    }
    cout<<"the sum of the series is: "<<sum;
    return 0;
}