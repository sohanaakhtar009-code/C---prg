#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class Exam : public Student
{
protected:
    int m1, m2, m3, m4, m5, m6;

public:
    void getMarks()
    {
        cout << "Enter marks of six subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5 >> m6;
    }
};

class Result : public Exam
{
    int total;

public:
    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5 + m6;
    }

    void display()
    {
        cout << "\n----- STUDENT RESULT -----" << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: " << m1 << " " << m2 << " "
             << m3 << " " << m4 << " "
             << m5 << " " << m6 << endl;

        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();
    r.display();

    return 0;
}