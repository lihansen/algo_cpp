//
// Created by Hansen Li on 4/23/23.
//
#include "../../include/UnionFind.h"

UnionFind::UnionFind(int n) {
    this->_count = n;
    parent.resize(n);

    for (int i = 0; i < n; i++) { // the parent of each root node is itself.
        parent[i] = i; // initially, each parent point to itself, separate trees
    }

}

int UnionFind::findRoot(int x) {
    if (this->parent[x] != x) { // path compression
        parent[x] = findRoot(parent[x]); // for each node in this tree, direct connect the node to the root
    }

    return parent[x]; // return the parent of node x
}

bool UnionFind::isConnected(int p, int q) {
    return findRoot(p) == findRoot(q);
}

void UnionFind::unite(int p, int q) {
    int rootP = findRoot(p);
    int rootQ = findRoot(q);
    if (rootP != rootQ) {
        parent[rootP] = rootQ;
        _count--;
    }
}

int UnionFind::count() {
    return this->_count;
}

void UnionFind::print_parent() {
    for (auto &x: this->parent) {
        cout << x << " ";
    }
    cout << endl;
}




