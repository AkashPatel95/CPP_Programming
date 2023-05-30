//program to find sum of array using function template
#include<iostream>
using namespace std;

template <class T>
T sumofarray(T arr[],T n) {
    T sum=0;

    for(int i=0;i<n;i++) {
        cout<<"element-"<<i<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    cout<<"array addition: "<<sum;
}
int main() {
    int num;
    cout<<"enter elements to be stored in an array: ";
    cin>>num;

    int arr[num];
    sumofarray(arr,num);
    return 0;
}