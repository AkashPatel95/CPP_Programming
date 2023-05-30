#include<iostream>
using namespace std;

int main() {

    int i,j,num,k,sum=0;
    cout<<"enter term till you wanted to calculate series:";
    cin>>num;

    for(i=1;i<=num;i++) {
        for(j=1;j<=num;j++) {
            if(j==i) {
                k=i*j;
            sum=sum+k;
            }
        }
    
    }
    cout<<"the sum of the above series is:"<<sum;
    return 0;
}