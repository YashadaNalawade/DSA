#include<iostream>
using namespace std;

int main()
{
    int target = 12;
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int maxSum = 0;

    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<4; j++)
        {
            sum += arr[i][j];
        }
        if(sum>maxSum)
        maxSum = sum;
    }
    cout<<maxSum;
    return 0;
}