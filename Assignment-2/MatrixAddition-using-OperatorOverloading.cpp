//program to addition of 1D matrix using operator overloading
#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int* data;

public:
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    // Overloading '+' operator for matrix addition
    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> data[i];
        }
    }

    // Function to display matrix elements
    void display() {
        cout << "Matrix: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter size of matrices: ";
    cin >> size;

    // Create two Matrix objects
    Matrix matrix1(size);
    Matrix matrix2(size);

    // Input matrix elements
    cout << "Enter elements for Matrix 1:\n";
    matrix1.input();
    cout << "Enter elements for Matrix 2:\n";
    matrix2.input();

    // Add the matrices using overloaded '+' operator
    Matrix result = matrix1 + matrix2;

    // Display the matrices and the result
    cout << "Matrix 1:\n";
    matrix1.display();
    cout << "Matrix 2:\n";
    matrix2.display();
    cout << "Sum of matrices:\n";
    result.display();

    return 0;
}

