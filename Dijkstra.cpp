#include "Dijkstra.h"

Dijkstra::Dijkstra(Graph& G, int s, Dist* &D){
    bool FOUND;
    D = new Dist[G.vecticesNumber()];
    for(int i = 0; i < G.vecticesNumber(); i++){
        G.getVisited()[i] = false;
        D[i].index = i;
        D[i].length = INFINITY;
        D[i].pre = s;
    }
    D[s].length = 0;
    MinHeap H = new MinHeap(G.edgesNumber());
    H.insert(D[s]);
    for(i = 0; i < G.vecticesNumber(); i++){
        FOUND = false;
        Dist d;
        while(!H.isEmpty())
            d = H.removeMin();
            if(G.getVisited()[d.index] == false){
                FOUND = true;
                break;
            }
    }
    if(!FOUND)
        break;
    int v = d.index;
    G.getVisited()[v] = true;
    for(Edge e = G.firstEdge(v); G.isEdge(e); e = G.nextEdge(e))
        if(D[G.toVertex(e)].length > (D[v].length+G.weight(e))){
            D[G.toVertex(e)].length = D[v].length+G.weight(e);
            D[G.toVertex(e)].pre = v;
            H.insert(D[G.toVertex(e)]);
        }

}
