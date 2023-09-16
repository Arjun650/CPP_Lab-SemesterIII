// Write a calculator pgm (without classes)which has function calc(), Pass first and second argument as operands and third argument.

// Call the calc function 3 times with different values

// Calc( 2, 3,’+’)

// Calc(4,5,’*’)

// Calc(20,30,’-‘)

#include <iostream>
using namespace std;
float calc (float first , float second , char ope);
int main()
{
    float first , second ;
    char ope;
    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;

    cout<<"Enter the operand you  want to calculate: "<<endl<<"'+' , '-' , '*' , '/'"<<endl;

    cin>>ope;

    float result = calc(first , second , ope);

    cout<<"The result of the calculation id: " << result;
return 0;
}
float calc(float first , float second , char ope){
    switch (ope)
    {
    case '+':
        return first + second;
        break;
    case '-':
        return first - second;
        break;
    case '*':
        return first * second;
        break;
    case '/':
        return first / second;
        break;
    default:
        cout<<"Please enter valid operand";
        break;
    }
}