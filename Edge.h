#ifndef _EDGE_H_
#define _EDGE_H_

class Edge{
private:
    int from;
    int to;
    int weight;
public:
    Edge();
    Edge(int from, int to, int weight);
    int getFrom();
    void setFrom(int from);
    int getTo();
    void setTo(int to);
    int getWeight();
    void setWeight(int weight);

};

#endif
