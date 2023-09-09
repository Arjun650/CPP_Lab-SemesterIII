#include <iostream>
using namespace std;

class calc{
    int a , b , c;
    public:
    void getdata(int x , int y){
            a = x;
            b = y;
    }

    void sum (calc t , calc u){
        a = t.a + u.a;
        b = t.b + u.b;
    }

    void dis(){
        cout<<"The sum is : "<<a <<endl <<b<<endl;
    }
};

int main()
{
    calc sum1 , sum2 , sum3;
    sum1.getdata(2 , 4);
    sum2.getdata(2 , 4);

    sum3.sum(sum1 , sum2); 
    sum3.dis();
return 0;
}