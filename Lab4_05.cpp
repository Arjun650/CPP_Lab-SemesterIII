// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
#include <iostream>
using namespace std;
class Area{
    protected:
    int length ;
    int breadth;
    public:
        void setDim(int l , int b){
            length = l;
            breadth = b;
        }
};

class Rectangle : public Area{
    int area;
    public:
    void getArea(){
            area =  length * breadth ;   
            display();       
        }
    void display(){
        cout<<"The area of rectangle is :" << area<<endl;
    }
};

int main()
{
    Rectangle area1;
    area1.setDim(2 , 4);
    area1.getArea();

    return 0;
}           