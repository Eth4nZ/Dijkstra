#ifndef _ADJACENCYMATRIX_H_
#define _ADJACENCYMATRIX_H_
#include "Graph.h"

class AdjacencyMatrix: public Graph{
private:
    int **matrix;
public:
    AdjacencyMatrix();
    AdjacencyMatrix(int numVertex);
    ~AdjacencyMatrix();
    Edge firstEdge(int oneVertex);
    Edge nextEdge(Edge pre);
    void setEdge(int from, int to, int weight);
    void delEdge(int from, int to);
    int fromVertex(Edge edge);
    int toVertex(Edge edge);
    int weight(Edge edge);
    int** getMatrix(){
        return matrix;
    }
};

#endif
