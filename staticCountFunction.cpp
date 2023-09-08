#include <iostream>
using namespace std;

class emp{
    int id;
    static int count;
    public:
    void getdata();
    static void getCount(){
        cout<<"the value of count is "<<count<<endl;
    }    


};

void emp::getdata(){
    cout<<"enter your id"<<endl;
    cin>>id;
    count++;
}
int emp::count;



int main()
{
    emp a , b , c , d;
    a.getdata();
    emp::getCount();
return 0;
}