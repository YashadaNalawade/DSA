#include<iostream>
using namespace std;

void sp(string str)
{
    string s = str;
    int right = s.length() - 1;
    int left = 0;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    if(s==str) cout<<"palindrome";
    else cout<<"not palindrome";
}

int main()
{
    sp("momo");
}