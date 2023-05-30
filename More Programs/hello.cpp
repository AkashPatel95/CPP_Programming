#include<iostream>
using namespace std;

class Vegan {
    public:
    int a;
    cout<<"enter detail: ";
    cin>>a;

    void display() {
        cout<<a;
    }
};
int main() {
    Vegan b;
    b.display();
    return 0;
}