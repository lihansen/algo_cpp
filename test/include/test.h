//
// Created by Hansen Li on 4/17/23.
//

#ifndef ALGO_CPP_TEST_H
#define ALGO_CPP_TEST_H

#include<iostream>
#include "../../include/Graph.h"

using namespace std;

//void test_ReverseList();
//void test_23();
//
//void test_STDStack();
//void test_32();
//
//void test_buildHeapInPlace();
//void test_215_Heap();
//
//void test_QSelection();
//void test_KthLargest();
//
//void test_stoi();
//
//void test_TreeUtil();
//
//void test_FlattenBTree();
//void test_construBTree();
//void test_SelectionSort();
//void test_bubbleSort();
//void test_InsertionSort();
//void test_validBST();

// Graph
void test_797();

void test_207();

void test_210();
void test_topo();
void test_dinstSubArray();


void test() {
    cout << "testing..." << endl;

//    test_207();
//    test_210();
    test_topo();
//    test_dinstSubArray();
};


#endif //ALGO_CPP_TEST_H
