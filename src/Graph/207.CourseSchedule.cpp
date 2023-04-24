//
// Created by Hansen Li on 4/16/23.
//

#include "../../include/Graph.h"

vector<vector<int>> build_graph(vector<vector<int>> &prereq, int n){
//    can use resize instead
//    vector<vector<int>> graph;
//    graph.resize(n);


    // vector local vars is on stack seg, but their data is stored on heap seg
    // auto graph = *new vector<vector<int>>(n);
    vector<vector<int>> graph(n);
    for(auto & edge: prereq){
        auto course = edge[1];
        auto pre = edge[0];
        (graph)[course].push_back(pre);
    }
    return graph;
}

// leetcode 207, detect a cycle in a graph,
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

    auto graph = build_graph(prerequisites, numCourses);
    vector<int> visited(numCourses);
    bool res = true;
    for (int i = 0; i < numCourses ; ++i) {
        if (!visited[i]) {
            res = res and cycle_detection(graph, visited, i);
        }
    }

    return res;

}
