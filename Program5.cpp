#include <iostream>
using namespace std;

int main() {
    int n, original, rem, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative numbers are not Armstrong numbers.";
    }
    else {
        original = n;

        while (n > 0) {
            rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }

        if (original == sum)
            cout << "The number is an Armstrong number.";
        else
            cout << "The number is not an Armstrong number.";
    }

    return 0;
}  