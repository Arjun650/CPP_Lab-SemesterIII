// Design a class name Square that defines a square geometric shape. The class must have a data member named side that defines the length of each side. Then define two member functions, Find_Peri and Find_Area, to find the perimeter and area of the square shape. Now define a Cube that defines a cubic shape and inherits from the Square class. The class Cube needs no new data members, but it needs the member functions Find_surfaceArea_cube and Find_peri_cube. With the help of base class fns find the area and perimeter of cube. Provide the appropriate constructors and destructors for both classes.

#include <iostream>
#include<math.h>
using namespace std;
class Square{
    protected:
        int side;
    public:
        Square(){};
        Square(int len);
        int find_peri();
        int find_area();
};
    Square::Square(int len){
        side = len;
    }
    int Square::find_peri(){
        return 4*side;
    }
    int Square::find_area(){
        return pow(side , 2);
    }
class Cube :public Square{
    // protected:
    public:
    Cube(){ };
    Cube(int l){
        side = l;
    };

    void Find_surfaceArea_cube();
    void Find_peri_cube();

};

void Cube:: Find_surfaceArea_cube(){
    cout<<"The area of cube is "<< 6 * pow(side , 2)<< endl;
}
void Cube:: Find_peri_cube(){
    cout<<"The perimeter of cube is " << 12 * side<<endl;
}
int main()
{
    // Square first(10);
    // first.find_area();
    // first.find_peri();
    Cube second(10);
    second.Find_peri_cube();
    second.Find_surfaceArea_cube();
return 0;
}