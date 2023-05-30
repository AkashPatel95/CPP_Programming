//program to find largest word in a string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int length;

    cout<<"enter a string: ";
    getline(cin,str);

    length=str.length();
    string largestword="";
    string currentword="";

    
    for(int i=0;i<length;i++) {
        if(str[i]!=' ') {
            currentword+=str[i];
        }
        else {
            if(currentword.length()>largestword.length()) {
                largestword=currentword;
            }
            currentword="";
        }
    }
    if(currentword.length()>largestword.length()) {
        largestword=currentword;
    }
    cout<<"largest word is "<<largestword<<"\n";
    return 0;
}