#include <iostream>
using namespace std;

int linearSearch(int arr[],int s,int k)
{
    for (int i=0;i<s;i++)
    {
        if (arr[i]==k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {12, 32, 44, 26, 1, 53, 70};
    int k=53;

    int result = linearSearch(arr, 7, k);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}