#ifndef _GRAPH_H_
#define _GRAPH_H_
#include "Edge.h"

class Graph{
private:
    int numVertex;
    int numEdge;
    bool *visited;
    int *indegree;
public:
    Graph();
    Graph(int numVertex);
    ~Graph();
    int vecticesNumber();
    int edgesNumber();
    Edge firstEdge(int oneVertex);
    Edge nextEdge(Edge pre);
    void setEdge(int from, int to, int weight);
    void delEdge(int from, int to);
    bool isEdge(Edge edge);
    int fromVertex(Edge edge);
    int toVertex(Edge edge);
    int weight(Edge edge);

};

#endif
