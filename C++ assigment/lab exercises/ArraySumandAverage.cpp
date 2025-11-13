#include <iostream>
using namespace std;

main() {
    int i,n,sum = 0;
    cout << "Enter how many numbers: ";
    cin >> n;

    int arr[100]; 

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
    	
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

}

