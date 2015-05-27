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
    void setNumEdge(int numEdge);
    bool* getVisited();
    int* getIndegree();
    bool isEdge(Edge edge);
    virtual Edge firstEdge(int oneVertex);
    virtual Edge nextEdge(Edge pre);
    virtual void setEdge(int from, int to, int weight);
    virtual void delEdge(int from, int to);
    virtual int fromVertex(Edge edge);
    virtual int toVertex(Edge edge);
    virtual int weight(Edge edge);
};

#endif
