	// Create a DISTANCE class with Feet and inches as data members, Member function to input distance, Member function calculate_tot_inches and return the total inches, Member function to add two distance objects, display(), which displays the data members .Write a main function to create objects of DISTANCE class. Input two distances and output the sum.

#include <iostream>
using namespace std;

class Distance{
    float feet;
    float inches;
    public:
    void getdata();
    void adddist(Distance d1 , Distance d2);
    void display();
};

void Distance:: getdata(){
    cout<<"enter distance in feet";
    cin>>feet;
    cout<<"enter distance in inches";
    cin>>inches;
}

void Distance::adddist(Distance d1 ,Distance d2){
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;
}

void Distance::display(){
    cout<<"The Total distance in feet is " << feet <<endl;
    cout<<"The Total distance in inches is " <<inches<<endl;
}

int main(){
    Distance d1 , d2 , d3;
    cout<<"enter first distance";
    d1.getdata();
    cout<<"enter second distance";
    d2.getdata();
    d3.adddist(d1 , d2);
    d3.display();
    
}

