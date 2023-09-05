#include<iostream>
using namespace std;
class student{
    char reg_No[30];
    float sub1 , sub2 , sub3;
    public:
    void read();
    int sum();
    void average();
};

void student::read(){
    cout<<"enter registration number";
    cin>>reg_No;
    cout<<"enter marks of first subject";
    cin>>sub1;
    cout<<"enter marks of second subject";
    cin>>sub2;
    cout<<"enter marks of third subject";
    cin>>sub3;
}

int student::sum(){
    float summ;
    summ = sub1+sub2+sub3;
    cout<<"Total: "<<summ<<endl;
    return summ;
}
void student::average(){
    float ave = sum()/3;
    cout<<"Average: "<< ave<<endl;
}

int main(){
    student stDet;
    stDet.read();
    // stDet.sum();
    stDet.average();
}
