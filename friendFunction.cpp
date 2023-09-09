#include <iostream>
using namespace std;

class sum{
    int a ; 
    int b;
    public:
    void getdata(int x , int y);
    void putdata();
    friend sum sumSum(sum o1 , sum o2);
};
void sum::getdata(int x , int y){
    a = x ; 
    b = y;
}

 sum sumSum(sum o1 , sum o2){
    sum o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;

    return o3;
}

void  sum::putdata(){
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;
}

int main()
{
    sum o1 , o2 , sum;
    o1.getdata(2 , 4);
    o1.putdata();
    o2.getdata(2 , 4);
    o2.putdata();
    sum = sumSum(o1 , o2);
    sum.putdata();

return 0;
}