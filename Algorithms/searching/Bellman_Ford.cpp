#include<iostream>
#include <limits.h>
using namespace std;


//using others graph
struct Edge {
  int u;  //start vertex of the edge
  int v;  //end vertex of the edge
  int w;  //w of the edge (u,v)
};

// Graph - it consists of edges
struct Graph {
  int V;        // Total number of vertices in the graph
  int E;        // Total number of edges in the graph
  struct Edge* edge;  // Array of edges
};

// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E) {
  struct Graph* graph = new Graph;
  graph->V = V;  // Total Vertices
  graph->E = E;  // Total edges

  // Array of edges for graph
  graph->edge = new Edge[E];
  return graph;
}


void BellmanFord(struct Graph* graph, int start)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];
 
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[start] = 0;
 
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = graph->edge[j].u;
            int v = graph->edge[j].v;
            int weight = graph->edge[j].w;
            if (dist[u] != INT_MAX
                && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }


    for (int i = 0; i < E; i++) {
        int u = graph->edge[i].u;
        int v = graph->edge[i].v;
        int weight = graph->edge[i].w;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            return; 
        }
    }
 
}

int main(){
  //anything


  return 0;
}
