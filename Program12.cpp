#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void operator++()
    {
        real++;
        imag++;
    }

    void operator--()
    {
        real--;
        imag--;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 5), c3;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    ++c1;
    ++c2;

    cout << "\nAfter Increment:" << endl;
    c1.display();
    c2.display();

    --c1;
    --c2;

    cout << "\nAfter Decrement:" << endl;
    c1.display();
    c2.display();

    c3 = c1 + c2;
    cout << "\nAddition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();

    return 0;
}