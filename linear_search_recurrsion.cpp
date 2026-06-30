#include<iostream>
using namespace std;

bool linearsearchrecurrsion(int arr[], int size, int key)
{
    if(size==0) return false;
    if(arr[0]==key) return true;
    else
    {
      return linearsearchrecurrsion(arr+1,size-1,key);
    }
}
int main()
{
    int arr[7] = {12, 32, 44, 26, 1, 53, 70};
    int key=53;
    bool ans =  linearsearchrecurrsion(arr,7,key);
    cout<<ans<<endl;


}