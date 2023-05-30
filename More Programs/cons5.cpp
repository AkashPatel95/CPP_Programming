//program to list non-prime numbers from 1 to upperbound using constructor and destructor
#include<iostream>
using namespace std;

class Nonprime {
    public:
    int limit,count=0;
    Nonprime(int upperlimit) {
        cout<<"constructor is called\n";
        limit=upperlimit;
        
    }
    void calculate() {
        for(int i=1;i<=limit;i++) {
            for(int j=1;j<=i;j++) {
                if(i%j==0) {
                    count++;
                }
            }
            if(count==2) {
                cout<<i;
            }
        }
    }
    ~Nonprime() {
        cout<<"destructor is called\n";
    }
};
int main() {
    int upperlimit;
    cout<<"enter a upperlimit: ";
    cin>>upperlimit;

    Nonprime obj(upperlimit);
    return 0;
}