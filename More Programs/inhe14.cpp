//program to illustrate multiple inheritance
#include<iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout<<"animal is eating food\n";
        }

};
class Mammal:virtual public Animal {
    public:
        void give_birth() {
            cout<<"mammal is giving a birth\n";
        }

};
class Bird:virtual public Animal {
    public:
        void fly() {
            cout<<"birds are flying\n";
        }
};
class Reptile:public Animal {
    public:
        void lay_eggs() {
            cout<<"reptile are laying eggs\n";
        }
};
class FlyingMammal:public Mammal,public Bird {
    public:
        void hover() {
            cout<<"Flying mammals are hovering\n";
        }
};
int main() {
    Animal animal;
    Mammal mammal;
    Bird bird;
    Reptile reptile;
    FlyingMammal flyingmammal;

    animal.eat();
    mammal.eat();
    mammal.give_birth();

    bird.eat();
    bird.fly();

    reptile.eat();
    reptile.lay_eggs();

    flyingmammal.eat();
    flyingmammal.give_birth();
    flyingmammal.fly();
    return 0;
}