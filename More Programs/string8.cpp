//program to count all words in a string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int count=1;

    cout<<"enter string: ";
   getline(cin,str);

    int length=str.length();
    for(int i=0;i<length;i++) {
      if(str[i]==' ') {
        count++;
        
      }
      
    }
    cout<<"number of words per string are:"<<count<<"\n";
    return 0;
}