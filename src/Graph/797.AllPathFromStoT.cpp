//
// Created by Hansen Li on 4/16/23.
//
#include "../../include/Graph.h"

//Input: graph = [[1,2],[3],[3],[]]  , this input is a adjacency list
//Output: [[0,1,3],[0,2,3]]

vector<vector<int>> res;

void back_tracking(vector<vector<int>> & graph, int s, vector <int> & path){

    path.push_back(s);

    if (s == graph.size() - 1){ // if s is the target, put this path into the res
        res.push_back(path);
    }

    for(auto & vtx: graph[s]){ // if this target is not the target
        back_tracking(graph, vtx, path);
    }
    path.pop_back();
//
}


vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<int> path;
    back_tracking(graph, 0, path);
    return res;
}

