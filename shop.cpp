#include <iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int Pcounter;
    public:
    void getdata();
    void display();
    void counter(){
        Pcounter = 0;
    }
};

void shop::getdata(){
    cout<<"Item-Id: "<< Pcounter +1  <<endl;
    cin>>itemId[Pcounter];
    cout<<"Item-Price: "<<Pcounter + 1<<endl;
    cin>>itemPrice[Pcounter];
    Pcounter++;
}

void shop::display(){
    for(int i = 0 ; i<Pcounter; i++){
        cout<<"Item-Id: "<<itemId[i]<<endl;
        cout<<"Item-Price: "<<itemPrice[i]<<endl;
    }
}
int main()
{   shop shopList;
    int n ;
    shopList.counter();
    cout<<"Enter total number of product"<<endl;
    cin>>n;
    for(int j = 0 ; j<n ; j++){
        shopList.getdata();
    }

    shopList.display();

return 0;
}