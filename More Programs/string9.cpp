//program to check two characters are equal at or not
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1,str2;

    cout<<"enter string: ";
    getline(cin,str1);

    cout<<"enter string: ";
    getline(cin,str2);

    int length=str1.length();
    for(int i=0;i<length;i++) {
        if(str1[i]==str2[i]) {
            cout<<str1[i];
        }
        else return 0;
    }
    return 0;
}