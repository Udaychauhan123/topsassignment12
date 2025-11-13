#include <iostream>
#include <string>
using namespace std;

main() {
    string str;
    cout << "Enter a word: ";
    cin >> str;

    int len = str.length();
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "It's a palindrome.";
    else
        cout << "It's not a palindrome.";

}

