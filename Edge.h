#include "Vertex.h"

#ifndef _EDGE_H_
#define _EDGE_H_

class Edge
{
public:
  Edge();
  Edge(const Vertex* dest, int depart, int arrive, double cost);
private:
  Vertex* dest;
  int depart;
  int arrive;
  double cost;
};

#endif
