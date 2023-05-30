//program to swap two numbers using friend function
#include <iostream>
using namespace std;

class Number {

   public:
   	int value;
    Number(int v = 0) : value(v) {}

    // Friend function to swap two numbers
    friend void swapNumbers(Number& num1, Number& num2);
};

// Friend function to swap two numbers
void swapNumbers(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    Number num1(10);
    Number num2(20);

    cout << "Before swapping: " << num1.value << " " << num2.value << endl;

    // Swap the numbers using the friend function
    swapNumbers(num1, num2);

    cout << "After swapping: " << num1.value << " " << num2.value << endl;

    return 0;
}

