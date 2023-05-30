//program to illustrate operator overloading
#include<iostream>
#include<string>
using namespace std;

class MyString {
        public:
        string str;

        MyString(string n) {
                str=n;
        }
        MyString operator+(MyString s2) {
                string n1=str+s2.str;
                str=n1;
                return MyString(str);
        }
        void display() {
                cout<<"concatination: "<<str;
        }
};
int main() {
        MyString s1("AKASH");
        MyString s2(" PATEL");
        MyString s3=s1+s2;
                s3.display();
        return 0;
}

