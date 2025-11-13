#include <iostream>
using namespace std;
void proceduralArea() {
    int length, width, area;

    cout << "\n--- Procedural Programming (POP) ---" << endl;
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;

    cout << "Area of rectangle (POP) = " << area << endl;
}
class Rectangle {
public:
    int length, width;

    void getInput() {
        cout << "\n--- Object-Oriented Programming (OOP) ---" << endl;
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    void showArea() {
        int area = length * width;
        cout << "Area of rectangle (OOP) = " << area << endl;
    }
};
main() {
    int choice;

    cout << "========== AREA OF RECTANGLE ==========" << endl;
    cout << "Choose method:" << endl;
    cout << "1. Procedural Programming (POP)" << endl;
    cout << "2. Object-Oriented Programming (OOP)" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        proceduralArea();  
    } else if (choice == 2) {
        Rectangle rect;  
        rect.getInput();
        rect.showArea();
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}

