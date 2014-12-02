#include "Vertex.h"

using namespace std;

Vertex::Vertex(string city){
	cityName = city;
}

void Vertex::addEdge(Edge edge){
	edges.push_back(edge);
}