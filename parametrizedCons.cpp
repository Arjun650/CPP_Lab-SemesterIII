#include <iostream>
#include <cmath>
#include<math.h>
using namespace std;

class dis{
    int point1 , point2;
    friend float dist(dis , dis);
    public:
        dis(int x , int y);


};

float dist(dis a , dis b){
    int c , d ;
    c = pow((b.point1 - a.point1 ) , 2);
    d = pow((b.point2 - a.point2) , 2);
    return (pow((c+d), 0.5));
    
}

dis::dis(int x , int y)
    {
            point1 = x;
            point2 = y;
        }


int main()
{
    dis d1(0 , 1);
    dis d2(0 , 6);

    float Distance = dist(d1 , d2);
    cout<<"the distance is "<<Distance<<endl;

return 0;
}