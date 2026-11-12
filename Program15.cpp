#include <iostream>
using namespace std;

class Media
{
protected:
    string title, publication;

public:
    virtual void read()
    {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter publication: ";
        cin >> publication;
    }

    virtual void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Book : public Media
{
    int pages;

public:
    void read()
    {
        Media::read();

        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void show()
    {
        Media::show();

        cout << "Number of pages: " << pages << endl;
    }
};

class Tape : public Media
{
    float time;

public:
    void read()
    {
        Media::read();

        cout << "Enter playing time: ";
        cin >> time;
    }

    void show()
    {
        Media::show();

        cout << "Playing time: " << time << " minutes" << endl;
    }
};

int main()
{
    Book b;
    Tape t;

    Media *ptr;

    cout << "Enter Book Details:" << endl;
    ptr = &b;
    ptr->read();

    cout << "\nEnter Tape Details:" << endl;
    ptr = &t;
    ptr->read();

    cout << "\nBook Details:" << endl;
    ptr = &b;
    ptr->show();

    cout << "\nTape Details:" << endl;
    ptr = &t;
    ptr->show();

    return 0;
}