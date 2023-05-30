//program to illustrate function overloading
#include<iostream>
using namespace std;

int calculatearea(int length,int width);
double calculatearea(double radius);
int main() {

    int length,width;
    double radius;
    cout<<"enter length and width: ";
    cin>>length>>width;

    int result1=calculatearea(length,width);
    cout<<"area of the rectangle: "<<result1;
    cout<<"enter a radius: ";
    cin>>radius;
    double result2=calculatearea(radius);
    cout<<"area of the circle: "<<result2;

    return 0;
}
int calculatearea(int length,int width) {
    int result1;
    result1=length*width;
    return result1;
}
double calculatearea(double radius) {
    double result2;
    result2=3.14*radius*radius;
    return result2;
}