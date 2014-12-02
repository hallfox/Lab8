#include "Edge.h"

Edge::Edge() :
dest(nullptr),
depart(0),
arrive(0),
cost(0) {}

Edge::Edge(const Vertex* dest, int depart, int arrive, double cost):
dest(dest),
depart(depart),
arrive(arrive),
cost(cost) {}
