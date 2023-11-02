/*Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

Sample Input : Enter Your Marks: 98
Sample Output : Your Grade is A+

100 – 90
90 – 80
80 – 70
70 – 60
60 – 50
50 – 40
40 – 30
30 – 0

A+
A
B+
B
C
D
E
F*/

#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your Marks: ";
    cin>>marks;

    if(marks>90 && marks<=100)
    {
        cout<<"Your Grade is A+"<<endl;
    }
    else if (marks>80 && marks<=90)
    {
       cout<<"Your Grade is A"<<endl;
    }
    else if(marks>70 && marks <=80)
    {
        cout<<"Your Grade is B+"<<endl;
    }
    else if(marks>60 && marks<=70)
    {
        cout<<"Your Grade is B"<<endl;
    }
    else if(marks>50 && marks<=60)
    {
        cout<<"Your Grade is C"<<endl;
    }
    else if(marks>40 && marks<=50)
    {
        cout<<"Your Grade is D"<<endl;
    }
    else if(marks>30 && marks<=40)
    {
        cout<<"Your Grade is E"<<endl;
    }
    else
    {
        cout<<"Your Grade is F"<<endl;
    }
    
    return 0;

}