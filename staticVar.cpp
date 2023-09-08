#include <iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
    void getdata();
    void setdata();
};

int employee::count;

void employee::getdata(){
    cout<<"enter your id"<<endl;
    cin>>id;
    count++;
    setdata();
}

void employee::setdata(){
    cout<<"the count of object is "<<count<<endl;
}

int main()
{
    employee a , b , c, d;
    a.getdata();
    b.getdata();
    c.getdata();
    d.getdata();
return 0;
}