//
// Created by Hansen on 2023/4/23.
//

#include "../../include/UnionFind.h"


void test_UF() {
    auto uf = UnionFind(5);
    uf.print_parent();
    uf.unite(0, 1);
    uf.unite(1, 2);
    uf.print_parent();
    uf.unite(3, 4);
    uf.print_parent();
    uf.unite(2, 4);
    uf.print_parent();

}