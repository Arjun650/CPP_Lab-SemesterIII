// Create a class point with members X and Y. Use parameterized constructor to initialize the class members. Use copy constructor to coy the value of point P1 to Point P2. Include function calculate_distance which finds the distance between two points P1 and P3.

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

class Point{
    int x , y;
    public:
    Point(){};
    Point(int a , int b);
    Point(Point &d );

    friend float calDis(Point obj1 , Point obj2);
};

float calDis(Point obj1 , Point obj2){
    float c , d ;
    c = pow((obj2.x - obj1.x) , 2);
    d = pow((obj2.y - obj1.y) , 2);
    // cout<<c;
    return sqrt(c + d);
}

Point::Point(int a , int b){
        x = a ;
        y = b ;
    }
Point::Point(Point &d){
    x = d.x;
    y = d.y;
 
}

int main(){
    int x , y;
    cout<<"Point 1 "<<endl<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    Point p1(x , y);

    Point p2(p1);

    cout<<"Point 2 "<<endl<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;

    Point p3(x , y);

    float Distance = calDis(p1 , p3);
    cout<<"Distance : " <<Distance;

}

