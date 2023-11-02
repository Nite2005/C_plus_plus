/*Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/
/*
Explanation :
Formula for profit and loss
Profit = S.P - C.P
Loss = C.P - S.P
(S.P is Selling Price and C.P is Cost Price)

Sample Input :
Enter cost price: 4000
Enter selling price: 9560

Sample Output :
Profit = 5560*/

#include<iostream>
using namespace std;

int main()
{
    int sp,cp,profit,loss;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    
    if(sp>cp)
    {
        cout<<"Profit is : "<<sp-cp<<endl;

    }
    else
    {
        cout<<"Loss is : "<<cp-sp<<endl;

    }
    
    return 0;

}