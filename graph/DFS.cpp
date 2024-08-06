#include <iostream>
#include<map>
#include<list>

using namespace std;

// Graph class represents a directed graph using adjacency list representation
class Graph {
public:
	map<int, bool> visited; // visited
	map<int, list<int> > adj;  // adj list

	// function to add an edge to graph
	void addEdge(int v, int w);

	// DFS traversal of the vertices reachable from v
	void DFS(int v);
};



void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}



void Graph::DFS(int v)
{
	// Mark the current node as visited and print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent to this vertex
	list<int>::iterator i;  // declaring iterator to a list.
	for (i = adj[v].begin(); i != adj[v].end(); ++i) 
    {
        if (!visited[*i])
			DFS(*i); 
    }                                                                         
}


int main()
{
	// Create a graph given in the above diagram
	Graph g;
	g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,1);
	cout << "Following is Depth First Traversal starting from vertex 1 : ";

	g.DFS(1);   // Function call

	return 0;
}



    // Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program.
    // 1. begin() :- This function is used to return the beginning position of the container.
    //2. end() :- This function is used to return the after end position of the container.
    //The main advantage of an iterator is to provide a common interface for all the containers type.
    // syntax : <ContainerType> :: iterator;  

// Vector of Vectors is a two-dimensional vector with a variable number of rows where each row is vector. Each index of vector stores a vector which can be traversed and accessed using iterators.

// A pair is a container which stores two values mapped to each other, and a vector containing multiple number of such pairs is called a vector of pairs.


