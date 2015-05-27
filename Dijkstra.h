#ifndef _DIJKSTRA_H_
#define _DIJKSTRA_H_
#include "Dist.h"
#include "AdjacencyMatrix.h"
#include "MinHeap.h"

class Dijkstra{
public:
    Dijkstra(Graph& G, int s, Dist* &D);
    ~Dijkstra();
};

#endif
