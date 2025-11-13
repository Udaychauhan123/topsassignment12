#include <iostream>
using namespace std;
main() {
    int a = 5, b = 3;
    // Arithmetic operators
    cout << "Arithmetic Operators:" << "\n";
    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";
    cout << "a * b = " << a * b << "\n";
    cout << "a / b = " << a / b << "\n";
    cout << "a % b = " << a % b << "\n";

    // Relational operators
    cout << "\nRelational Operators:" << "\n";
    cout << "(a == b): " << (a == b) << "\n";
    cout << "(a != b): " << (a != b) << "\n";
    cout << "(a > b): " << (a > b) << "\n";
    cout << "(a < b): " << (a < b) << "\n";
    cout << "(a >= b): " << (a >= b) << "\n";
    cout << "(a <= b): " << (a <= b) << "\n";

    // Logical operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << "\n";
    cout << "(x && y): " << (x && y) << "\n";
    cout << "(x || y): " << (x || y) << "\n";
    cout << "(!x): " << (!x) << "\n";

    // Bitwise operators
    cout << "\nBitwise Operators:" << "\n";
    cout << "(a & b) = " << (a & b) << "\n";
    cout << "(a | b) = " << (a | b) << "\n";
    cout << "(a ^ b) = " << (a ^ b) << "\n";
    cout << "(~a) = " << (~a) << "\n";
    cout << "(a << 1) = " << (a << 1) << "\n";
    cout << "(a >> 1) = " << (a >> 1) << "\n";

}

