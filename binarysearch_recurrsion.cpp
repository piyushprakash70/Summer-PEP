#include<iostream>
using namespace std;

bool binarysearch(int arr[],int left, int right, int key)
{
    if(left>right) return false;
    int mid=left+(right-left)/2;
    
    if(arr[mid]==key) return true;
    else if(arr[mid]<key) return binarysearch(arr,mid+1,right,key);
    else return binarysearch(arr,left,mid-1,key);

}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 10;

    if (binarysearch(arr, 0, n - 1, key))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}