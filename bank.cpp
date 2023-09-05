#include <iostream>
using namespace std;
class bank{
    double accNo;
    char namee[30];
    double balancee;
    public:
    void getdata(double a ,  double c);
    void deposit();
    void withdraw();
    void balance();
    
};

void bank::getdata(double a  ,   double c){
    accNo = a ; 
    balancee = c;
    cout <<"enter your name: "<<endl;
    cin>>namee;
}

void bank::deposit(){
    int a;
    cout<<"enter anmount you want to add"<<endl;
    cin>>a;
    balancee = balancee+a;
    cout<<"amount added successfully"<<endl; 
}
void bank::withdraw(){
    int a;
    cout<<"enter amount you want to withdraw"<<endl;
    cin>>a;
    balancee = balancee-a;
    cout<<"Amount withdrawn successfully"<<endl;
}
void bank::balance(){
    cout<<"your total amount is: "<<balancee<<endl;
}
int main(){
    bank addDet;
    addDet.getdata(1230012,  30088801);

    int a = 1 ;
    while(a!=0){
        for(int i = 0 ; i<10 ; i++){
            cout<<"---";
        }
        
        cout<<endl<<"1 --- Withdraw"<<endl;
        cout<<"2 --- Deposit"<<endl;
        cout<<"3 --- Check Balance"<<endl;
        cout<<"0 --- EXIT"<<endl;

        cin>>a;

        if(a ==1){
            addDet.withdraw();
        }
        if(a==2){
            addDet.deposit();
        }
        if(a==3){
            addDet.balance();
        }
    }
}