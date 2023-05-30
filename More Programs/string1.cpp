//program to print string in reverse
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    char temp;
    int length;

    cout<<"enter a string: ";
    getline(cin,str);

    length=str.length();
    for(int i=0;i<length/2;i++) {
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    cout<<"string in reverse order is: "<<str<<"\n";
    return 0;
}