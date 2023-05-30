//program to display the sum of the series 9+99+999+....+n using constructor and destructor
#include<iostream>
using namespace std;

class Series {
    public:
    int n,sum=0,totalsum=0;
    Series(int num) {
        n=num;
    }
    void display() {
        for(int i=1;i<=n;i++) {
            sum=(sum*10)+9;
            totalsum=totalsum+sum;
        }
        
    }
    void result() {
        cout<<"total sum of the series: "<<totalsum;
    }
    ~Series() {
        cout<<"destructor is called\n";
    }

};
int main() {
    int number;
    cout<<"enter a number: ";
    cin>>number;

    Series obj(number);
    obj.display();
    obj.result(); 
    return 0;
}