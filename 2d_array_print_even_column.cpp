#include<iostream>
using namespace std;

void print_even_col(int arr[3][4], int r, int col)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][4];
    //user input row wise
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }


    //user input column wise
    /* for(int i=0;i<4;i++)
    {
        for(int j=0;i<3;j++)
        {
            cin>>arr[j][i];
        }
    } */
   print_even_col(arr,3,4);
}