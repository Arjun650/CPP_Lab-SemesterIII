#include <iostream>
using namespace std;
class employee{
    char empCode[30];
    char empName[30];
    double annualSalary;
    public:
    void getdata();
    void display();
};

void employee::getdata(){
    cout<<"enter Employee code: ";
    cin>>empCode;
    cout<<"enter Employee Name: ";
    cin>>empName;
    cout<<"enter Employee Annaual Salary: ";
    cin>>annualSalary;
}

void employee::display(){
    cout<<"Employee Code: "<<empCode<<endl;
    cout<<"Employee Name: "<<empName<<endl;
    cout<<"Annual Salary: "<<annualSalary<<endl;
}

int main(){

    int n ;
    cout<<"enter number of employee";
    cin>>n;
    employee emp[n];

    for(int i = 0 ; i<n ; i++){
        emp[i].getdata();
    }

    cout <<"the detail of employees are ";
    for(int i = 0 ; i<n ; i++){
        emp[i].display();
    }


}