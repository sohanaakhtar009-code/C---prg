#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char name[64], address[64];
    int age;
    float basic, hra, da, total;

public:
    Person()
    {
        age = 0;
        basic = hra = da = total = 0;
    }

    Person(char n[], int a, char ad[], float s)
    {
        strcpy(name, n);
        strcpy(address, ad);
        age = a;
        basic = s;

        hra = basic * 0.20;
        da = basic * 0.10;
        total = basic + hra + da;
    }

    void getData()
    {
        char n[64], ad[64];
        int a;
        float s;

        cout << "Enter name: ";
        cin.ignore();
        cin.getline(n, 64);

        cout << "Enter age: ";
        cin >> a;

        cout << "Enter address: ";
        cin.ignore();
        cin.getline(ad, 64);

        cout << "Enter basic salary: ";
        cin >> s;

        *this = Person(n, a, ad, s);
    }

    inline void findAge(Person p[], int n)
    {
        int young = 0, old = 0;

        for (int i = 1; i < n; i++)
        {
            if (p[i].age < p[young].age)
                young = i;

            if (p[i].age > p[old].age)
                old = i;
        }

        cout << "\nYoungest Person: " << p[young].name;
        cout << "\nAge: " << p[young].age;

        cout << "\n\nEldest Person: " << p[old].name;
        cout << "\nAge: " << p[old].age << endl;
    }

    void salarySlip()
    {
        cout << "\n----- SALARY SLIP -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Total Salary: " << total << endl;
    }
};

int main()
{
    Person p[10];
    int n;

    cout << "Enter number of persons (maximum 10): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Person " << i + 1 << endl;
        p[i].getData();
    }

    p[0].findAge(p, n);

    for (int i = 0; i < n; i++)
    {
        p[i].salarySlip();
    }

    return 0;
}