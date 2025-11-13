#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!\n";
        return 0;
    }
    return (double)a / b;
}
main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << add(num1, num2) << "\n";
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << "\n";
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << "\n";
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << "\n";
            break;
        default:
            cout << "Invalid operation!\n";
    }

}

