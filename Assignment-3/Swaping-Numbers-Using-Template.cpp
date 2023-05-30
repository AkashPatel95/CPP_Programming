//program to swap numbers using template
#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swapValues(T& value1, T& value2) {
    T temp = value1;
    value1 = value2;
    value2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Before swapping: " << num1 << " " << num2 << endl;

    // Swap the numbers using the template function
    swapValues(num1, num2);

    cout << "After swapping: " << num1 << " " << num2 << endl;

    return 0;
}

