/* Q1.- Write a program which takes the values of length and breadth from user and check if it is
a square or not.*/
/*Sample Input :
Enter length: 5
Enter breadth: 4
Sample Output : It is a rectangle*/

#include<iostream>
using namespace std;

int main()
{
    int l,b;
    cout<<"Enter the value of length: ";
    cin>>l;
    cout<<endl;
    cout<<"Enter the value of breadth: ";
    cin>>b;
    cout<<endl;

    if(l==b)
    {
        cout<<"Shape  is SQUARE "<<endl;
    }
    else
    {
        cout<<"Shape is RECTANGLE"<<endl;
    }
    return 0;
}