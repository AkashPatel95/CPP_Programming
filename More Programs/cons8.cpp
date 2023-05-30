//program to find the largest element of a given array using constructor and destructor
#include<iostream>
using namespace std;

class Large {
    public:
    int n,temp;
    char arr[];
    Large() {
        int num;
        cout<<"enter elements to be stored in an array:";
        cin>>num; 
        n=num;
        char arr[n];
        for(int i=0;i<n;i++) {
            cout<<"element-"<<i<<": ";
            cin>>arr[i];
        }
    }
    void calculate() {
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(arr[i]>arr[j]) {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        

        }
    }
    void display() {
        cout<<"the largest element is: "<<arr[n-1]<<"\n";
    }
    ~Large() {
        cout<<"destructor is called\n";
    }
};
int main() {
    Large obj;
    obj.calculate();
    obj.display();


    return 0;
}