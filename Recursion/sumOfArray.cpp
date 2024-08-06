#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    if(size == 0)
    {return 0;}

    int sum = arr[0];
    sum += sumOfArray(arr+1, size-1);
    return sum;
}

int main()
{
    int arr[] = {1,2,3,4,5000};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = sumOfArray(arr,size);
    cout<<ans;
    return 0;
}