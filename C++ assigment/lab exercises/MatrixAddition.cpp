#include <iostream>
using namespace std;

main() {
    int A[2][2], B[2][2], Sum[2][2];

    cout << "Enter elements of Matrix A (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nResultant Matrix (A + B):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

}

