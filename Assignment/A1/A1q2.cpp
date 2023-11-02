/*Q2.- Write a program to print absolute value of a number entered by the user.*/
/*Sample Input: -1
Sample Output: 1 */
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number:";
    cin>>num;

    if(num<0)
    {  
      
        cout<<"Absolute value is: "<<abs(num)<<endl;
    }
    else
    {
        cout<<"Absolute value is: "<<num<<endl;
    }
    return 0;
}