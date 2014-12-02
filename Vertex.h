#ifndef vert_h
#define vert_h

#include <list>

class Vertex{
 private:
  std::string cityName;
  std::list<Edge> edges;
 public:
  Vertex(std::string);
  
  void addEdge(Edge);
};
#endif
