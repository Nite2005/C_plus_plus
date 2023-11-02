/*Q1 - Write a program to check whether two numbers (entered by user) are equal or not. (Easy)
Sample Input 1: 1, 2
Sample Output 1: 0

Sample Input 2: 2, 2
Sample Output 2: 1*/

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;

    if(x==y)
    {
       cout<< true;

    }
    else{
        cout<<false;
    }
    return 0;
}
