// Library Management System:
// Build a Library class with methods to add books, issue books to students, and return books. Maintain a list of available books and books issued to students.

#include <iostream>
#include <cstring>
using namespace std;
class Library{
    string redgNo;
    string name;
    int semester;
    public:
    Library(){};
    Library(string a , string b , int c);
    static void  operation(Library abc);
    void getBook();
    void greet(string b);
    void submitBook();
    void totalBook();
    void removeBook();
    
};

Library::Library(string a  , string b , int c ){
    redgNo = a ; 
    name = b ;
    semester = c;
    greet(b);
    }

void Library :: greet(string b){
    cout<<"Hello! " + b + " , How can we help you?😁 "<<endl;  
}

void  Library:: operation(Library abc){
     int a ;
        while(a != 4){
            cout<<"1 --> bookList"<<endl<<"2 --> submit Book << endl << 3--> Borrow Book" << endl <<"4 --> Cancel";
            cout<<"select the option";
            cin>>a;

            if(a==1){
                abc.totalBook();
            }
            if(a == 2){
                abc.submitBook();
            }
            if(a == 3){
                abc.getBook();
            }

        };
}

void Library :: totalBook(){
    char list[100][100] = {
  "To Kill a Mockingbird",
  "1984",
  "The Great Gatsby",
  "The Catcher in the Rye",
  "Pride and Prejudice",
  "The Hobbit",
  "The Lord of the Rings",
  "Harry Potter and the Sorcerer's Stone",
  "The Hunger Games",
  "The Da Vinci Code",
  "The Alchemist",
  "The Shining",
  "Brave New World",
  "Fahrenheit 451",
  "The Road",
  "The Book Thief",
  "The Hitchhiker's Guide to the Galaxy",
  "The Giver",
  "The Girl with the Dragon Tattoo",
  "The Catcher in the Rye"};
// for (int i = 0; std::strlen(list[i]) > 0; i++) {
//         totalBooks++;
//     }

//     std::cout << "Total number of books stored: " << totalBooks << std::endl;
// }
int i = 0 ;
while(strlen(list[i]) > 0){
    cout<<i+1<<" ";
    cout<< list[i]<<endl;
    i++;
}

    };

void Library::removeBook(){
    
}
void Library::getBook(){
    totalBook();
    int bookNo;
    cout<<"Enter the book No. you want to borrowd";
    cin>>bookNo;

}

int main(){
        Library std("cse22186" , "Arjun " , 2);

        Library::operation(std);


}