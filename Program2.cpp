#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative integers.";
    }
    else if (n == 0) {
        cout << "Factorial of 0 = 1";
    }
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}