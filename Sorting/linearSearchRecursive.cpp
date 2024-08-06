#include<iostream>
using namespace std;

int linearSearch(int a[], int i, int n, int key) // i because it keeps changing in the recursive call
{
    if(i < n) // base condition
    {
        if(a[i]==key) // linear search condition
        {
            return i;
        }
        return linearSearch(a,i+1,n,key); // recursive call
    }
    return -1;
}

int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 5;
    int res = linearSearch(a,0,n,key); // storing returned value in res variable
    if (res != -1) {
        cout << "Element found at index " << res << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}