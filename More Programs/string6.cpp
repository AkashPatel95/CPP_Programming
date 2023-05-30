//program to sort string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    char temp;
    int length;
   
    cout<<"enter string: ";
    cin>>str;

    length=str.length();
    for(int i=0;i<length;i++) {
        for(int j=i+1;j<length;j++) {
            if(str[i]>str[j]) {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<"revised string: "<<str<<"\n";
    return 0;
}