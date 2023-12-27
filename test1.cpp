// Create 2 classes complex1, complex2 with members real and imaginary. Include member function to read the values for data members. Include friend function to add object of both the classes.(add real nos of both the class and add imaginary nos of both the class)

#include <iostream>
using namespace std;
class complex2;
class complex1{
    int real;
    int imaginary;
    public:
    complex1(){};
    complex1(int real , int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void putdata(){
        cout<<"Real: "<<real;
        cout<<"Imaginary "<<imaginary;
    }
    friend complex1 add(complex1 , complex2);
};
class complex2{
    int real;
    int imaginary;
    public:
    complex2(){};
    complex2(int real , int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void putdata(){
        cout<<"Real: "<<real;
        cout<<"Imaginary "<<imaginary;
    }
    friend complex1 add(complex1 , complex2);
};

complex1 add(complex1 a, complex2 b ){
    int real = a.real + b.real;
    int imaginary = a.imaginary + b.imaginary;
    cout<<"Real: "<<real<<endl;
    cout<<"Imaginary: "<<imaginary<<endl;
}
int main(){
    complex1 a(2 , 5);
    complex2 b(3 , 6);
    complex1 c;
     add(a , b);
}




