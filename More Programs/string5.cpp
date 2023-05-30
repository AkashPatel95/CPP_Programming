//program to find smallest word in a string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int length;

    cout<<"enter string: ";
    getline(cin,str);

    length=str.length();
    string smallest="";
    string current="";

    for(int i=0;i<length;i++) {
        if(str[i]!=' ') {
            current+=str[i];
        }
        else {
            if(current.length()>smallest.length()) {
                smallest=current;
            }
            current="";
        }
    }
    if(current.length()>smallest.length()) {
       cout<<"smallest word is "<<smallest<<"\n";
    }
    else {
        cout<<"smallest word is "<<current<<"\n";
    }
    return 0;
}