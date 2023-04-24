//
// Created by Hansen Li on 4/13/23.
//

#ifndef ALGO_CPP_GRAPH_H
#define ALGO_CPP_GRAPH_H

#include <iostream>
#include <vector>

using namespace std;

//
//class Vertex {
//    int id;
//    vector<Vertex*> neighbors;
//};

//struct Vertex {
//    int id;
//    vector<Vertex *> neighbors;
//};

// adjacency list
//vector<vector<int>> graph;
//
// adjacency matrix
//bool **adjMatrix;

void print_adjacencyList(vector<vector<int>>);


vector<vector<int>> build_graph(vector<vector<int>> &prereq, int n);


bool cycle_detection(vector<vector<int>> &graph,
                     vector<int> &visited,
                     int u);

vector<int> topologicalOrder(vector<vector<int>> &edges,
                             vector<int> &indeg,
                             int n);

// leetcode 797: dfs for graph
vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &);

// leetcode 207
bool canFinish(int numCourses, vector<vector<int>> &prerequisites);

// leetcode 210
vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites);


#endif //ALGO_CPP_GRAPH_H
