//program to change given string with the letter following it in the alphabet
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int length;

    cout<<"enter a string: ";
    getline(cin,str);

    length=str.length();
    for(int i=0;i<length;i++) {
        if(isalpha(str[i])) {
            if(str[i]=='Z') {
                str[i]='A';
            }
            else if(str[i]=='z') {
                str[i]='a';
            }
            else {
                str[i]++;
            }
        }
    }
    cout<<"string is: "<<str<<"\n";
    return 0;
}