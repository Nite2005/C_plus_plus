/* Q3 - Write a C++ program to take length and breadth of a rectangle and print its area. (Easy)
Sample Input : 7, 4
Sample Output : 28 */

#include<iostream>
using namespace std;

int main()
{
    int l,b;
    cout<<"Enter length of Rectangle: ";
    cin>>l;
    cout<<"Enter breadth of Rectangle: ";
    cin>>b;
    int area=l*b;
    cout<<"Area of Rectangle is : "<<area<<endl;
    return 0;
    
}