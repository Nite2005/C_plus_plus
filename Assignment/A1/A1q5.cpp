/*Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.

Sample Input :
Enter an operator (+, -, *, /): -
Enter two numbers:
6
8
Sample Output : 6 - 8 = -2

*/

#include<iostream>
using namespace std;

int main()
{
    float num1,num2;
    char opr;

    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    cout<<"Enter an Operator (+,-,/,*): ";
    cin>>opr;

    switch(opr)
    {
        case '+': cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
              break;
        
        case '-': cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
              break;
        
        case '*': cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
              break;
            
        case '/': cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
              break;
            
        default : cout<<"Input is Invalid";

    }

    return 0;
    
}