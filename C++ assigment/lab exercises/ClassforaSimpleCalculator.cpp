#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int sub(int a, int b) {
        return a - b;
    }
    int mul(int a, int b) {
        return a * b;
    }
    float div(float a, float b) {
        return a / b;
    }
};

main() {
    Calculator c;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << c.add(x, y) << endl;
    cout << "Subtraction: " << c.sub(x, y) << endl;
    cout << "Multiplication: " << c.mul(x, y) << endl;
    cout << "Division: " << c.div(x, y) << endl;

}

