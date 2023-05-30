#include<iostream>
using namespace std;

int main() {
    int i,j,sum;
    cout<<"perfect number between 1 to 500 are:\n";

    for(i=2;i<=500;i++) {
        sum=0;
        for(j=1;j<i;j++) {
            if(i%j==0) {
                sum=sum+j;
            }
        }
        if(sum==i) {
            cout<<i<<"\n";
        }
    }
    return 0;
}