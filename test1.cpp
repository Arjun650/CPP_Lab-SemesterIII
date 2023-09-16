#include <iostream>
using namespace std;

class Test{
    int a ,  b ;

    public:
    Test(int x , int y){
        a = x;
        b = y;
    }
     Test(Test &df){
        a = df.a;
        b = df.b;
    }
};

int main()
{
    // Test a1 = Test(2 , 3);          //error
    // Test a2 = Test(a1);             //error
return 0;
}