#include <iostream>
using namespace std;

string rev(string s, int i, int j)
{
    if (i > j)
        return s;

    swap(s[i], s[j]);
    i++;
    j--;

    rev(s, i, j);
    return s;
}

int main()
{
    string s = "yashada";
    int i = 0;
    int j = s.length() - 1;
    string ans = rev(s, i, j);
    cout<<ans;
    return 0;
}