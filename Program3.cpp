#include <iostream>
using namespace std;

int main() {
    int n, original, reverse = 0, digit;

    cout << "Enter an integer: ";
    cin >> n;

    original = n;

    if (n < 0) {
        cout << "Negative numbers are not palindrome.";
    }
    else {
        while (n > 0) {
            digit = n % 10;
            reverse = reverse * 10 + digit;
            n /= 10;
        }

        if (original == reverse)
            cout << "The integer is a palindrome.";
        else
            cout << "The integer is not a palindrome.";
    }

    return 0;
}