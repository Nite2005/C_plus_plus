/*Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
Sample Input : 12345
Sample Output : 1+4=5 */

#include <iostream>
using namespace std;
int main()
{
int n, first, second, third, fourth, fifth, sum;
cout<<"Enter any five digit number: ";
cin>>n;

first = n/10000; 
n = n%10000;
second = n/1000; 
n = n%1000;
third = n/100; 
n = n%100;
fourth = n/10; 
fifth = n%10;
sum = first + fourth;
cout << "sum of first and fourth digit is: " << sum << endl;
return 0;
}