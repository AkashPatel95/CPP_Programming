//program to sort an array using template
#include <iostream>
using namespace std;

// Template function to sort an array in ascending order
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int intArray[] = {5, 2, 8, 1, 9};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    // Sort the integer array using the template function
    sortArray(intArray, intSize);

    cout << "Sorted integer array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    double doubleArray[] = {3.7, 1.2, 2.5, 0.8};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    // Sort the double array using the template function
    sortArray(doubleArray, doubleSize);

    cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; i++) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    return 0;
}

