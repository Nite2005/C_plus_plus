/* Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
both the conditions 'a < 50' and 'a < b' are true. */

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    if(a<50 && a<b)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
    return 0;

}

