//program to enter student information
#include<iostream>
using namespace std;

class Studentinfo {
    public:
    string name,branch;
    int IDno,sem;
    void input();
    void display(); 
};
void Studentinfo::input() {
    cout<<"enter name: ";
    getline(cin,name);
    cout<<"enter branch: ";
    getline(cin,branch);
    cout<<"enter id number: ";
    cin>>IDno;
    cout<<"enter semester: ";
    cin>>sem;
}
void Studentinfo::display() {
    cout<<name<<"\n";
    cout<<branch<<"\n";
    cout<<IDno<<"\n";
    cout<<sem<<"\n";

}
int main() {
    Studentinfo s;
    s.input();
    s.display();

    return 0;
}