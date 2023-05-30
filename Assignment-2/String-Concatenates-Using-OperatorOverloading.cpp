//program to concatenates two strings using operator overloading
#include <iostream>
#include <string>
using namespace std;

class String {
private:
    string str;

public:
    String(const string& s = "") : str(s) {}

    // Overloading '+' operator for string concatenation
    String operator+(const String& other) {
        return str + other.str;
    }

    // Function to display the string
    void display() {
        cout << "String: " << str << endl;
    }
};

int main() {
    String str1("Hello");
    String str2(" World");

    // Concatenate the strings using overloaded '+' operator
    String result = str1 + str2;

    // Display the concatenated string
    result.display();

    return 0;
}

