//
// Created by Hansen Li on 4/16/23.
//
#include "../../include/Graph.h"

void test_797(){
    vector<vector<int>> graph = {{1,2}, {3}, {3}, {}};
    auto res = allPathsSourceTarget(graph);
    print_adjacencyList(res);
}

void test_207(){
    vector<vector<int>> prereq = {{1, 0}, {0, 1}};
    auto res = canFinish(2, prereq);
    cout<<res;
}

void test_210(){
    vector<vector<int>> prereq = {{1,0},{2,0},{3,1},{3,2}};
    auto res = findOrder(4, prereq);
    for(int i=0;i < 4; i++){
        cout<< res[i] << endl;
    }
}

void test_topo(){
    vector<vector<int>> prereq = {{1,0},{2,0},{3,1},{3,2}};
//    vector<vector<int>> prereq = {{1,0}};
    int n = prereq.size();
    vector<int> indeg(n);
    auto order = topologicalOrder(prereq, indeg, n);

    for(int i=0;i < n; i++){
        cout<< order[i] << endl;
    }

}