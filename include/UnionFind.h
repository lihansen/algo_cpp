//
// Created by Hansen Li on 4/19/23.
//

#ifndef ALGO_CPP_UNIONFIND_H
#define ALGO_CPP_UNIONFIND_H

#include <iostream>
#include <vector>

using namespace std;


class UnionFind {
private:
    vector<int> parent;
    int count;

public:

    explicit UnionFind(int);

    int findRoot(int x);

    bool isConnected(int p, int q);

    void unite(int p, int q);
};


#endif //ALGO_CPP_UNIONFIND_H
