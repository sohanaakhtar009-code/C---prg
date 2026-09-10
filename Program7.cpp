#include <iostream>
using namespace std;

void callByValue(int a, int b)
{
    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swap: a = " << a << ", b = " << b << endl;
}

void callByReference(int &a, int &b)
{
    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swap: a = " << a << ", b = " << b << endl;
}

int main()
{
    int a = 10, b = 20;

    cout << "Call By Value" << endl;
    callByValue(a, b);

    cout << "Original values after Call By Value:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << endl;

    cout << "Call By Reference" << endl;
    callByReference(a, b);

    cout << "Original values after Call By Reference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}