#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    void getData()
    {
        cout << "Enter first number: ";
        cin >> x;
    }

    friend void swap(A &, B &);
};

class B
{
    int y;

public:
    void getData()
    {
        cout << "Enter second number: ";
        cin >> y;
    }

    friend void swap(A &, B &);
};

void swap(A &a, B &b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main()
{
    A a;
    B b;

    a.getData();
    b.getData();

    cout << "\nBefore Swapping:" << endl;
    cout << "First number: " << a.x << endl;
    cout << "Second number: " << b.y << endl;

    swap(a, b);

    cout << "\nAfter Swapping:" << endl;
    cout << "First number: " << a.x << endl;
    cout << "Second number: " << b.y << endl;

    return 0;
}