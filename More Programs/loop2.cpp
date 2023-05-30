#include<iostream>
using namespace std;

int main() {
    int i,j,num,count=0;
    cout<<"enter a number:";
    cin>>num;

    for(i=num-1;i>=1;i--) {
        for(j=1;j<=i;j++) {
            if(i%j==0) {
                count++;
            }
           
        
        }
         if(count==2) {
        cout<<i<<"is the closest prime number to"<<num;
        break;

        }
        }
    return 0;
}