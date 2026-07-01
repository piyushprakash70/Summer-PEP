#include<iostream>
using namespace std;

bool search(int arr[][3], int row, int col, int target)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}

void sum_row(int arr[][3], int row, int col)
{
    int ms=0;
    int cal1;
    for(int i=0;i<3;i++)
    {
        int cal=0; 
        for(int j=0;j<3;j++)
        {
            cal=cal+arr[i][j];
            
        }
        cout<<cal<<" ";
        cal1=max(ms,cal);
    }
    cout<<cal1;
}

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int target = 5;
    //bool ans=search(arr,3,3,target);
    sum_row(arr,3,3);
    //cout<<ans;

}