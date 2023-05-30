#include<iostream>
using namespace std;

class looping {
    public:
    int num;
    looping() {
        cout<<"constructor is called\n";
        for(int i=1;i<=10;i++) {
            cout<<"num-"<<i<<"="<<i<<"\n";
        }
    }
    ~looping() {
        cout<<"destructor is called\n";
    }
};

int main() {
    looping obj;
    return 0;
}