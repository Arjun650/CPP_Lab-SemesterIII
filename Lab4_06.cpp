// Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.

#include <iostream>
using namespace std;
class Student{
    string name;
    string roll_number;
    long int phone_number;
    string address;
    public:
    Student(){};
    Student(string nam , string roll , long int number , string add);
    void display();
    ~Student();
};

void Student:: display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll number: "<<roll_number<<endl;
    cout<<"Phone number: "<<phone_number<<endl;
    cout<<"Address: "<<address<<endl;
}
Student::~Student(){
    cout<<"Object Destroyed"<<endl;
}
Student::Student(string nam , string roll , long int number , string add){
    name = nam;
    roll_number = roll;
    phone_number = number;  
    address = add;
}

int main()
{
    int n = 5;
    Student engineer[n]; 
    engineer[0] = Student("Arjun" , "cse22186" , 966179, "Nepal");
    engineer[1] = Student("Sanskar" , "cse22183" , 987654, "Nepal");
    engineer[2] = Student("Krishna " , "cse22184" , 98765, "Nepal");
    engineer[3] = Student("Munna" , "cse22181" , 90828 , "Nepal");

    for(int i = 0 ; i< 4 ; i++){
        engineer[i].display();
    }
    return 0;
}