/*Q5 - Write a program to calculate the sum of digits of a 3 digit number.
Sample Input : 123
Sample Output : 6*/


#include <iostream>
using namespace std;
int main()
{
int n, first, second, third,sum;

cout<<"Enter 3 digit number: ";
cin>>n;

first = n/100; 
n = n%100;
second = n/10; 
third = n%10; 
sum = first + second + third;
cout << "sum of 3 digits is: " << sum << endl;
return 0;
}