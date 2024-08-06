#include<iostream>
using namespace std;

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i = 1;
    int count = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<count<<" ";
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        count = count - i + 1;
        i = i + 1;
    }
}