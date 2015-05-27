#include "AdjacencyMatrix.h"

AdjacencyMatrix::AdjacencyMatrix(){
    AdjacencyMatrix(10);
}

AdjacencyMatrix::AdjacencyMatrix(int numVertex):Graph(numVertex){
    int i,j;
    matrix = (int **) new int *[numVertex];
    for(i = 0; i < numVertex; i++)
        matrix[i] = new int[numVertex];
    for(i = 0; i < numVertex; i++)
        for(j = 0; j < numVertex; j++)
            matrix[i][j] = 0;
}

AdjacencyMatrix::~AdjacencyMatrix(){
    for(int i =0; i < vecticesNumber(); i++)
        delete []matrix[i];
    delete []matrix;
}

Edge AdjacencyMatrix::firstEdge(int oneVertex){
    Edge edge;
    edge.setFrom(oneVertex);
    for(int i = 0; i < vecticesNumber(); i++){
        if(matrix[oneVertex][i] != 0){
            edge.setTo(i);
            edge.setWeight(matrix[oneVertex][i]);
            break;
        }
    }
    return edge;
}

Edge AdjacencyMatrix::nextEdge(Edge preEdge){
    Edge edge;
    edge.setFrom(preEdge.getFrom());
    if(preEdge.getTo() < vecticesNumber())
        for(int i = preEdge.getTo()+1; i < vecticesNumber(); i++){
            if(matrix[preEdge.getFrom()][i] != 0){
                edge.setTo(i);
                edge.setWeight(matrix[preEdge.getFrom()][i]);
                break;
            }
        }
    return edge;
}

void AdjacencyMatrix::setEdge(int from, int to, int weight){
    if(matrix[from][to] <= 0){
        setNumEdge(edgesNumber()+1);
        getIndegree()[to]++;
    }
    matrix[from][to] = weight;
}

void AdjacencyMatrix::delEdge(int from, int to){
    if(matrix[from][to] >0){
        setNumEdge(edgesNumber()-1);
        getIndegree()[to]--;
    }
    matrix[from][to] = 0;
}

int AdjacencyMatrix::fromVertex(Edge edge){
    return edge.getFrom();
}

int AdjacencyMatrix::toVertex(Edge edge){
    return edge.getTo();
}

int AdjacencyMatrix::weight(Edge edge){
    return edge.getWeight();
}
