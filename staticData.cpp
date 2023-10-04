#include <iostream>
using namespace std;
class Stadata{
    int x , y;

    public:
    static int count;
    void getdata(int a , int b);
    Stadata();
    void getCount();
};
Stadata::Stadata(){
    count++;
}
void Stadata::getCount(){
    cout<<count<<endl;
}
void Stadata::getdata(int a , int b){
        a = x ;
        b = y ;
}

int Stadata::count;
int main()
{
    Stadata a ;
    Stadata b;
    a.getCount();
    cout<<Stadata::count;
return 0;
}