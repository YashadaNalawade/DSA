#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i = 1;

    while(i<=n)
    {
        for(int j= i; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        i = i + 1;
    }
}