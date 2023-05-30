//program to display cube of the number up to an integer using constructor and destructor
#include<iostream>
using namespace std;

class Cube {
    public:
    int n,result;
    Cube(int num) {
        n=num;
    }
    void display() {
        for(int i=1;i<=n;i++) {
            result=i*i*i;
            cout<<"cub of "<<i<<"is"<<result<<"\n";
        }
    }
    ~Cube() {
        cout<<"destructor is called\n";
    }
};
int main() {
    int m;
    cout<<"enter upperlimit: ";
    cin>>m;
    Cube obj(m);
    obj.display();

    return 0;
}