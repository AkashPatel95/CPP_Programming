//program to find max number using friend function
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v = 0) : value(v) {}

    // Friend function to find the maximum number
    friend int findMax(Number& num1, Number& num2);
};

// Friend function to find the maximum number
int findMax(Number& num1, Number& num2) {
    return (num1.value > num2.value) ? num1.value : num2.value;
}

int main() {
    Number num1(10);
    Number num2(20);

    // Find the maximum number using the friend function
    int maxNumber = findMax(num1, num2);

    cout << "Maximum number: " << maxNumber << endl;

    return 0;
}

