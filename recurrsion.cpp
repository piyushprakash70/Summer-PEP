#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int fibbonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fibbonacci(n-2)+fibbonacci(n-1);
}

int main()
{
    int n=10;
    cout<<"Factorial: "<<factorial(n)<<endl;
    cout<<"Fibbonacci: "<<fibbonacci(n)<<endl;


}