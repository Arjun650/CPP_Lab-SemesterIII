#include <iostream>
using namespace std;
class coCO{
    int x;
    public:
    coCO(){
    };
    coCO(int a ){
         x = a;
    }
    coCO(coCO &val){
        x = val.x;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main()
{
    coCO first(10);
    coCO second(first);
    first.display();
    second.display();
    coCO third = first;
    third.display();

return 0;
}