// Define a class employee having members Emp-id, Emp-name, basic salary and functions accept() and display(). Calculate DA=10% of basic salary, HRA=1200, I-tax=10% of basic salary. Display the payslip using appropriate output format.


#include <iostream>
#include <math.h>
using namespace std;

class employee {
    char empId[30];
    char empName[30];
    long int basicSalary;
    long int total;
    int da , hra , tax ;
    public:
    void accept();
    void calculate();
    void display();
};

void employee::accept(){
    cout<<"enter Employee Id"<<endl;
    cin>>empId;

    cout<<"enter Employee Name"<<endl;
    cin>>empName;

    cout<<"enter your Basic Salary"<<endl;
    cin>>basicSalary;

}

void employee::calculate(){
    da =  (0.1*basicSalary);
    hra = 1200;
    tax =  (0.1*basicSalary);
    total = da+hra +tax + basicSalary;
}

void employee::display(){
    cout<<"DA         " <<"10%      "<<da<<endl;
    cout<<"HRA        " <<"         "<<hra<<endl;
    cout<<"tax        " <<"10%      "<<tax<<endl;
    cout<<"total      " <<"         "<<total<<endl;
}

int main(){
    employee emp1;
    emp1.accept();
    emp1.calculate();
    emp1.display();
    return 0;
}