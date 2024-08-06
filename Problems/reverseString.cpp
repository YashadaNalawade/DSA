#include <iostream>
using namespace std;

void revs(string s)
{
    int right = s.length() - 1;
    int left = 0;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    cout << s;
}

int main()
{
    revs("string");
    return 0;
}