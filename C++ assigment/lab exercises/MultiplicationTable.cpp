#include <iostream>
using namespace std;
main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication table for " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << number * i << "\n";
    }

}

