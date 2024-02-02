// Time complexity - O(n)
#include <iostream>
using namespace std;

int main()
{
    int n, key, flag = 0;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    cout << "enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key to be searched:";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            cout << "key found at index " << i;
        }
    }
    if (flag == 0)
        cout << "key not found";
}