#include "Graph.h"

Graph::Graph(){
    Graph(10);
}

Graph::Graph(int numVertex){
    this->numVertex = numVertex;
    numEdge = 0;
    visited = new bool[numVertex];
    indegree = new int[numVertex];
    for(int i = 0; i < numVertex; i++){
        visited[i] = false;
        indegree[i] = 0;
    }
}

Graph::~Graph(){
    delete []visited;
    delete []indegree;
}

int Graph::vecticesNumber(){
    return numVertex;
}

int Graph::edgesNumber(){
    return numEdge;
}

void Graph::setNumEdge(int numEdge){
    this->numEdge = numEdge;
}

bool* Graph::getVisited(){
    return visited;
}

int* Graph::getIndegree(){
    return indegree;
}

bool Graph::isEdge(Edge edge){
    if(edge.getWeight() > 0 && edge.getWeight() < INFINITY && edge.getTo() >= 0)
        return true;
    else
        return false;
}
