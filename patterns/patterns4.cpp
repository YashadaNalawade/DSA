#include<iostream>
using namespace std;

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

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
            cout<<i<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}