#include<iostream>
using namespace std;

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<j<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}