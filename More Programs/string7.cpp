//program to count all vowels in a string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int count=0;

    cout<<"enter a string: ";
    getline(cin,str);

    int length=str.length();
    for(int i=0;i<length;i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            count++;
        }

    }
    cout<<"vowels in string are: "<<count<<"\n";
    return 0;
}