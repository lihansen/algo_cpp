//
// Created by Hansen Li on 4/13/23.
//

#include "../../include/Graph.h"
//
//class Vertex {
//    int id;
//    vector<Vertex*> neighbors;
//};

struct Vertex {
    int id;
    vector<Vertex*> neighbors;
};


// adjacency list
vector<vector<int>> graph;

// adjacency matrix
bool ** adjMatrix;




//vector<int> topologicalSort(const vector<vector<int>> & graph){
//    int n = graph.size();
//
//    vector <int> in_degree(n, 0);
//}