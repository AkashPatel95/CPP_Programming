//program to override animal sound using inheritance
#include<iostream>
using namespace std;

class Animal {
    public:
    void makesound() {
        cout<<"Animal sound\n";
    }
};
class Cat:public Animal {
    public:
    void makesound() {
        cout<<"Meow\n";
    }
};
int main() {
    Cat obj;
    obj.makesound();
    return 0;
}