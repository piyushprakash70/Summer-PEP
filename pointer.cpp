#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;          //stores the address

    cout<<&a<<endl;         // give the address of a
    cout<<ptr<<endl;        // give the same address of a
    cout<<*(ptr)<<endl;     //give the value stored in the variable a
    cout<<*(ptr+1)<<endl;   //garbage value
}