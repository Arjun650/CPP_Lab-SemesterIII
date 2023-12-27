#include <iostream>
using namespace std;

class emp{
    int emp_id;
    string emp_name;
    int age;
    float salary;
    public:
    static float total;
    void getdata();
    void putdata();
    static void total_salary(emp[] , int n);
};
float emp::total;
void emp::getdata(){
    cout<<"Enter employee id";
    cin>>emp_id;
    cout<<"Enter employee name";
    cin>>emp_name;
    cout<<"Enter age";
    cin>>age;
    cout<<"Enter salary";
    cin>>salary;
}

void emp::putdata(){
    cout<<"Employee id: "<<emp_id;
    cout<<"Employee Name"<<emp_name;
    cout<<"Employee age"<<age;
    cout<<"Salary: "<<salary;
}
void emp::total_salary(emp arr[] , int n){
    for(int i = 0 ; i< n ; i++){
            total = arr[i].salary + total;
    }
    cout<<total;
}

int main(){
    emp bba[3];
    for(int i = 0 ; i < 3 ; i++){
        bba[i].getdata();
    }
     for(int i = 0 ; i < 3 ; i++){
        bba[i].putdata();
    }
    emp::total_salary(bba , 3);
}