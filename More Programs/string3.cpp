//program to capitalize the first letter of each word
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
        if(i==0) {
            str[i]=toupper(str[i]);
        }
        else if(str[i-1]==' ') {
            str[i]=toupper(str[i]);
        }
    }
    cout<<"revised string is: "<<str<<"\n";
    return 0;
}