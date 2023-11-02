/*Q5 - Write a C++ program to find size of basic data types.
Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
to accomplish this. Give it a try to know the data types in depth)
Sample Output :
Size of fundamental data types :
The sizeof(char) : 1 bytes
The sizeof(short) : 2 bytes
The sizeof(int) : 4 bytes
The sizeof(long): 4 bytes
The sizeof(long long) : 8 bytes
The sizeof(float) : 4 bytes
The sizeof(double) : 8 bytes
The sizeof(long double) : 12 bytes
The sizeof(bool) : 1 bytes*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"The size of (char) is: "<<sizeof(char)<<endl;
    cout<<"The size of (short) is: "<<sizeof(short)<<endl;
    cout<<"The size of (int) is: "<<sizeof(int)<<endl;
    cout<<"The size of (long) is: "<<sizeof(long)<<endl;
    cout<<"The size of (long long) is: "<<sizeof(long long)<<endl;
    cout<<"The size of (float) is: "<<sizeof(float)<<endl;
    cout<<"The size of (double) is: "<<sizeof(double)<<endl;
    cout<<"The size of (long double) is: "<<sizeof(long double)<<endl;
    cout<<"The size of (bool) is: "<<sizeof(bool)<<endl;
    return 0;
}