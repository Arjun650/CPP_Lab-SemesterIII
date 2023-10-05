#include <iostream>
using namespace std;
class A{
    int len , bre , ara;
    public:
    A(){};
    A(int l , int b ){
        len = l;
        bre = b;
    };
    int area(){
        ara = len * bre;
        return ara;
    };
    int area1(A , A);
};
int A::area1(A e , A d){
    return e.area() + d.area();
}
int main()
{
    A rect(3 , 4);
    A rect1( 2 , 4);
    A rect3;
   int z=  rect3.area1(rect , rect1);
    cout<<z<<endl;
return 0;
}