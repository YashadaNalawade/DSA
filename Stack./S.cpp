#include<iostream>
using namespace std;

class stack
{
    public : 
    int top = -1;
    int s[1000];
    void push(int val)
    {
        top++;
        s[top] = val;
    }

    void pop()
    {
        top--;
    }

    void printStack()
    {
        while(top!=-1)
        {
            cout<<s[top]<<" ";
            top--;
        }
    }

};

int main()
{
    stack st;
    st.push(100);
    st.push(200);
    st.push(400);
    st.printStack();
}