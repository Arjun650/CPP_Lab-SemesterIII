#include <iostream>
using namespace std;
class imp_Stack{
    int* A;
    int n;
     static int point;

    public:
    void initializeArr();
    int push(int a);
    int pop();
    int isFull();
    int isEmpty();
    void peek();
};
    int imp_Stack::point;

void imp_Stack::initializeArr(){
    cout<<"Enter length of array"<<endl;
    cin>>n;
    A = new int[n];
}

int imp_Stack::isFull(){
    if( point == n){
        return 1;
    }
    else
        return 0;
}
int imp_Stack::push(int a){
    if( isFull() != 1){
        A[point] = a; 
        point++;
    }
    else{
        cout<<"Warning! Stack is Full";
        exit(0);
    }
    
}
void imp_Stack::peek(){
    cout<<"location: "<<point<<endl;
    cout<<"Value: "<<A[point-1]<<endl;
}

int imp_Stack::isEmpty(){
    if(point != -1){
        return 3;
    }
    else    
    return 4;
}
int imp_Stack::pop(){
    if(isEmpty() != 3){
        cout<<"Popped Element: "<<A[point];
        point--;
    }
    else    
        cout<<"Warning! Stack is Empty";
        exit(0);

}

int main(){
    imp_Stack first;
    first.initializeArr();
    first.push(5);
    first.push(3);
    first.peek();
    first.pop();
    first.pop();
    first.pop();
}