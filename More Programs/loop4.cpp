//program to calculate sum of 1+(1+2)+(1+2+3)+....+(1+2+3....+n)
#include<iostream>
using namespace std;

int main() {
    int n,i,j;
    cout<<"enter nth term:";
    cin>>n;

    int sum=0;
    for(i=1;i<=n;i++) {
        int subsum=0;
        for(j=1;j<=i;j++) {
            subsum=subsum+j;
        }
        sum=sum+subsum;
    }
    cout<<"the sum of the above series is: "<< sum;
    return 0;
}