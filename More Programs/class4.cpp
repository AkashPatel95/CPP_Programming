//program to add two time objects by call by adress
#include<iostream>
using namespace std;

class Time {
    public:
    int h,m,s;

    void input() {
        cout<<"enter hours,minutes and seconds: ";
        cin>>h>>m>>s;
    }
    void display() {
        cout<<h<<":"<<m<<":"<<s<<"\n";
    }
    void addtime(Time *t1,Time *t2);
};
void Time::addtime(Time *t1,Time *t2) {
    s=t1->s + t2->s;
    m=t1->m + t2->m + (s/60);
    h=t1->h + t2->h + (m/60);
    m=m%60;
    s=s%60;
}
int main() {
    Time t1,t2,t3;

    t1.input();
    cout<<"first time: \n";
    t1.display();

    t2.input();
    cout<<"second time: \n";
    t2.display();

    t3.addtime(&t1,&t2);
    cout<<"after addition: \n";
    t3.display();

    return 0;
}