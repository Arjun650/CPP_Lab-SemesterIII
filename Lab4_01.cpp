// Consider a class rectangle with members length and breadth. Find the area of rectangle using the function find_area. Use default constructor to initialize members with value zero. Use parameterized constructor to initialize members with value 5 and 7 as length and breadth respectively. Use copy constructor and copy the value of an object to another object. Find area of all the rectangle objects.?

#include <iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;

public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }
    rectangle(int a, int b)
    {
        length = a;
        breadth = b;
    }
    rectangle(rectangle &obj)
    {
        length = obj.length;
        breadth = obj.breadth;
    }
    friend int area(rectangle);
};

int area(rectangle a)
{
    return a.length * a.breadth;
}

int main()
{
    rectangle a;
    int area1 = area(a);
    cout << "the area of default constructor is : " << area1 << endl;
    a = rectangle(2, 2);
    int area2 = area(a);
    cout << "the area of parametrized constructor is : " << area2 << endl;

    rectangle b(a);
    int area3 = area(a);
    cout << "the area oef copy constructor is : " << area3 << endl;

    return 0;
}