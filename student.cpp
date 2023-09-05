#include <iostream>
using namespace std;
class student{
    public:
    int age ;
    int roll_no;
};

int main(){
    student st;
    cout<<"enter age of student"<<endl;
    cin>>st.age;
    cout<<"enter roll no of student"<<endl;
    cin>>st.roll_no;

cout<<"age: "<<st.age<<endl;
cout<<"roll no: "<<st.roll_no<<endl;    
}

