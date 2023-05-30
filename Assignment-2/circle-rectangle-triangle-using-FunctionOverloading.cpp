//program to calculate area of circle,rectangle,triangle using function overloading
#include <iostream>
using namespace std;


// Function to calculate the area of a circle
double calculateArea(double radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, width, base, height;

    // Calculate the area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circleArea = calculateArea(radius);
    cout << "Area of the circle: " << circleArea << endl;

    // Calculate the area of a rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    double rectangleArea = calculateArea(length, width);
    cout << "Area of the rectangle: " << rectangleArea << endl;

    // Calculate the area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double triangleArea = calculateArea(base, height);
    cout << "Area of the triangle: " << triangleArea << endl;

    return 0;
}

