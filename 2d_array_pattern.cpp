#include<iostream>
#include<vector>
using namespace std;

void wavepattern(int arr[][4], int row, int col)
{
    for(int c=0;c<col;c++)
    {
        if(c%2==0)
        {
            for(int r=0;r<row;r++)
                cout<<arr[r][c]<<" ";
        }
        else{
            for(int r=row-1;r>=0;r--)
            {
                cout<<arr[r][c]<<" ";
            }
        }
    }
    cout<<endl;
}

void spiralpattern(int arr[][4], int row, int col)
{
    int top = 0, bottom = row-1, left = 0 , right = col-1;
    while (top <= bottom && left <= right){
        for (int i = left ; i <= right ; i ++){
            //spiral.push_back(arr[top][i]);
            cout<<arr[top][i]<<" ";
            }
            top += 1;

        for (int j = top; j <= bottom ; j++){
            //spiral.push_back(arr[j][right]);
            cout<<arr[j][right]<<" ";
            }
            right -= 1;


        if (top <= bottom){
            for (int k = right; k >= left; k--){
                //spiral.push_back(arr[bottom][k]);
                cout<<arr[bottom][k]<<" ";
            }
            bottom -= 1;
        }
        if (left <= right){
            for (int l = bottom; l >= top; l--){
                //spiral.push_back(arr[l][left]);
                cout<<arr[l][left]<<" ";
            }
            left += 1;
            }
        }
        //cout<<spiral;
    }

int main()
{
    int arr[4][4]={6,11,4,10,13,1,15,2,8,102,5,14,3,16,9,7};
    wavepattern(arr,4,4);
    spiralpattern(arr,4,4);

}