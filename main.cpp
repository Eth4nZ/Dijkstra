#include <iostream>
#include "Edge.h"
#include "Graph.h"
#include "AdjacencyMatrix.h"
#include "Dist.h"
#include "MinHeap.h"
#include "Dijkstra.h"

int main(){
    AdjacencyMatrix G(5);
    G.setEdge(0,1,10);
    G.setEdge(0,4,100);
    G.setEdge(0,3,30);
    G.setEdge(1,2,50);
    G.setEdge(2,4,10);
    G.setEdge(3,1,10);
    G.setEdge(3,4,60);

    int s = 0;

    Dist *D;

    Dijkstra(G,s,D);


    return 0;
}
