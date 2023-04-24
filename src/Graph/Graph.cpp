//
// Created by Hansen Li on 4/13/23.
//

#include "../../include/Graph.h"
#include <queue>

// can be used on any other 2D vector printing
void print_adjacencyList(vector<vector<int>> graph) {
    for (int j = 0; j < graph.size(); j++) {
        cout << "[";
        for (int i = 0; i < graph[j].size(); i++) {
            cout << graph[j][i];
            if (i < graph[j].size() - 1) {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }
}

// three status:
// 0: unvisited
// 1: on path
// 2: finished visiting
vector<int> visited; // need to be init


// otherwise, we can use this on_path to store the visiting path
//vector<int> on_path;
bool hasCycle;


bool cycle_detection(vector<vector<int>> &graph,
                     vector<int> &visited,
                     int u) {
    visited[u] = 1; // visiting this node

    for (auto &neig: graph[u]) {
        if (visited[neig] == 0) { // visit this neighbor
            if (!cycle_detection(graph, visited, neig)) {
                return false;
            }
        } else if (visited[neig] == 1) { // this node is on path
            return false;
        }
    }
    visited[u] = 2;
    return true;
}


void cycle_detection(vector<vector<int>> graph, int u) {
    visited[u] = 1; // visiting this node

    for (auto &neighbor: graph[u]) {  // visit other neighbors for this node
        if (visited[neighbor] == 0) { // unvisited
            cycle_detection(graph, neighbor); // dive into
            if (!hasCycle) {  // hasCycle
                return;
            }
        } else if (visited[neighbor] == 1) { // on path
            hasCycle = false; //
            return;
        }
    }
    visited[u] = 2;
}


vector<int> topologicalOrder( vector<vector<int>> &edges,
                              vector<int> &indeg,
                              int n) {
    indeg.resize(n);
    // build graph
    vector<vector<int>> graph(n);
    for(auto & edge: edges){
        auto from = edge[1];
        auto to = edge[0];
        graph[from].push_back(to);
        indeg[to] ++;
    }

    auto res = *new vector<int>;
    queue<int> q;

    // put all 0 degree nodes into queue
    for (int i=0 ; i< n;i++){
        if (indeg[i] == 0){
            q.push(i);
        }
    }

    while (!q.empty()) {
        int u = q.front(); // get the top degree
        q.pop();  // then pop out the top
        res.push_back(u); // put the top into result

        for (auto &v: graph[u]) {
            if (--indeg[v] == 0) {  // reduce 1 for the degree of each neighbor v
                q.push(v);          // put the 0 degree node into the queue
            }
        }
    }

    if (res.size() != n) {  // if not all the nodes reduce to 0 degree, indicate that there is a cycle
        return {}; // no topological sort order
    } else
        return res;
}


//vector<int>