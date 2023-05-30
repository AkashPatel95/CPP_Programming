//program to illustrate function overloading
#include<iostream>
using namespace std;

void sortArray(int arr[5]);
void sortArray(float flo[5]);
int main() {
    int arr[5];
    float flo[5];
    for(int i=0;i<5;i++) {
        cout<<"element-"<<i<<": ";
        cin>>arr[i];
    }
    sortArray(arr);
    cout<<"after sorting an array: \n";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<"\n";
    }

     for(int i=0;i<5;i++) {
        cout<<"element-"<<i<<": ";
        cin>>flo[i];
    }
    sortArray(flo);
    cout<<"after sorting an array: \n";
    for(int i=0;i<5;i++) {
        cout<<flo[i]<<"\n";
    }
    return 0;
}
void sortArray(int arr[5]) {
    int temp;
    for(int i=0;i<5;i++) {
        for(int j=i+1;j<5;j++) {
            if(arr[i]>arr[j]) {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
}
void sortArray(float flo[5]) {
    float temp;
   
    for(int i=0;i<5;i++) {
        for(int j=i+1;j<5;j++) {
            if(flo[i]>flo[j]) {
            temp=flo[i];
            flo[i]=flo[j];
            flo[j]=temp;
            }
        }
    }
}