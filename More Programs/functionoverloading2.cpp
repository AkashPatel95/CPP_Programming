//program to illustrate function overloading
#include<iostream>
using namespace std;

int manipulateNumbers(int *a,int *b);
string manipulateNumbers(string *a,string *b);
int main() {
    int num1,num2,result1;
    string str1,str2,result2;
    cout<<"enter a two numbers: ";
    cin>>num1>>num2;

    result1=manipulateNumbers(&num1,&num2);
    cout<<"manipulated Numbers: a: "<<num1<<" b: "<<num2<<"\n";

    cin.ignore();
    cout<<"enter a string: ";
    getline(cin,str1);
     cout<<"enter a string: ";
    getline(cin,str2);
    manipulateNumbers(&str1,&str2);
    cout<<"manipulated string: str1: "<<str1<<" str2: "<<str2<<"\n";
    return 0;
}
int manipulateNumbers(int *a,int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}
string manipulateNumbers(string *a,string *b) {
    string temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}