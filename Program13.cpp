#include <iostream>
using namespace std;

class Area
{
public:
    float AREA(float r)
    {
        return 3.14 * r * r;
    }

    float AREA(float l, float b)
    {
        return l * b;
    }

    float AREA(float b, float h, int)
    {
        return 0.5 * b * h;
    }
};

int main()
{
    Area a;

    cout << "Area of Circle: " << a.AREA(5) << endl;

    cout << "Area of Rectangle: " << a.AREA(4, 6) << endl;

    cout << "Area of Triangle: " << a.AREA(4, 5, 0) << endl;

    return 0;
}