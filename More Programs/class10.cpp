//program to find sum of odd numbers between 1 to 100
#include<iostream>
using namespace std;

class Sum {
    public:
    int lowerlimit,upperlimit,sum=0;
    void input() {
        cout<<"enter lowerlimit and upperlimit: ";
        cin>>lowerlimit>>upperlimit;
    }
    void calculate() {
        for(int i=lowerlimit;i<=upperlimit;i++) {
            if(i%2!=0) {
                sum=sum+i;
            }
        }
    }
    void display() {
        cout<<"sum of all odd numbers are: "<<sum;

    }
};
int main() {
    Sum obj;
    obj.input();
    obj.calculate();
    obj.display();
    return 0;
}