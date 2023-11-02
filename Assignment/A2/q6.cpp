/*Q6 - Write a C++ program to swap two numbers with the help of a third variable. (Hard)
Sample Input : 2, 3
Sample Output : 3, 2*/



#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"Before swap "<<endl;
    cout<<"first Number is : "<<x<<endl;
    cout<<"second Number is : "<<y<<endl;
    z=x;
    x=y;
    y=z;
    cout<<"After swap "<<endl;
    cout<<"first number is : "<<x<<endl;
    cout<<"second number is : "<<y<<endl;

    return 0;
    

}