#include<iostream>
#include<map>
#include<list>
using namespace std;

class Graph
{
    public:
    map<int, list<int> > adj;
    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if(direction!=0)
        {
            adj[v].push_back(u);
        }
    }

    void printGraph()
    {
        for(auto i : adj)
        {
            cout<< i.first <<"->";
            for(auto j : i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g;
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    g.addEdge(4,1,0);
    g.printGraph();
    return 0;
}