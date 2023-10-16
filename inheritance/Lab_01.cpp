// Define a base class Shape with data members length and breadth and member function input(). And derive a class rectangle from the base class which has data members area and member function findarea() and display ().
#include <iostream>
using namespace std;
class Rectangle;
class Shape{
    protected:
    int length , breadth;
    public:
    void input();
};

void Shape::input(){
    cout<<"Enter the length";
    cin>>length;
    cout<<"Enter the breadth";
    cin>>breadth;
}

class Rectangle: public Shape{
    int area;
    public:
    void findarea();
    void display();
};

void Rectangle::findarea(){
    area = length * breadth;
}

void Rectangle::display(){
    cout<<"The area of the rectangle is : "<<area<<endl;
}
int main()
{
    Rectangle a;
    a.input();
    a.findarea();
    a.display();

return 0;
}