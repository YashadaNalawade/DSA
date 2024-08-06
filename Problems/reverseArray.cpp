#include<iostream>
using namespace std;

void rev()
{
    int arr[5] = {1,2,3,4,5};
    int brr[5];
    int n = sizeof(arr)/ sizeof(arr[0]);
    int j = 0;
    for(int i=n-1; i>=0; i--)
    {
        brr[j] = arr[i];
        j++;
    }
    for(int i=0 ;i<n; i++)
    {
        cout<<brr[i]<<" ";
    }
}

int main()
{
    rev();
}