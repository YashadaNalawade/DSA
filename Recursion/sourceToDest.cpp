#include <iostream>
using namespace std;

int sTod(int source, int destination)
{
    cout<< "source: " << source << "destination: " << destination << endl;

    // base case
    if(source == destination)
    {
        cout<<"reached";
        return 1;
    }

    // processing 
    source++;

    // recursive relation ( tail recursion )
    return sTod(source,destination);
}

int main()
{
    int source, destination;
    cin >> source >> destination;
    int ans = sTod(source, destination);
    return 0;
}

