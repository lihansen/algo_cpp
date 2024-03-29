cmake_minimum_required(VERSION 3.16)
project(algo_cpp)

set(CMAKE_CXX_STANDARD 14)

#include(FetchContent)
#
#FetchContent_Declare(
#        googletest
#        URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
#)
#
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#FetchContent_MakeAvailable(googletest)
#
#target_link_libraries(
#        gtest
#)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(
        algo_cpp
        src/main/main.cpp

        src/LinkedList/LinkedList.cpp
        src/LinkedList/213.reverseList.cpp
        src/Sorting/QuickSort.cpp
        src/String/67.add_binary.cpp
        src/String/38.count_and_say.cpp
        src/Sorting/MergeSort.cpp
        src/Heap/MyHeap.cpp
        src/Sorting/HeapSort.cpp
        src/Heap/23.mergeKSortedLists.cpp
#        test/LLtest.cpp
#        include/tests.h
        test/HeapTest.cpp
        test/StackTest.cpp
        include/Stack.h
        src/Stack/32.LongestValidParentheses.cpp
        src/Heap/215.KthLargest_Heap.cpp
        src/QuickSelection/QuickSelection.cpp
        include/QuickSelection.h
        test/QSelectionTest.cpp
        src/QuickSelection/215.KthLargestElemQSelect.cpp
        src/Tree/Tree.cpp
        include/Tree.h
        test/StringTest.cpp
        test/TreeTest.cpp
        src/Tree/114.FlattenBinTree.cpp
        src/Sorting/SelectionSort.cpp
        test/SortingTest.cpp
        src/Sorting/BubbleSort.cpp
        src/Sorting/InsertionSort.cpp
        src/Graph/Graph.cpp
        include/Graph.h
        src/Tree/BST.cpp
        src/Tree/BST/98.isValidBST.cpp
        test/BSTTest.cpp
        src/Graph/797.AllPathFromStoT.cpp
        test/src/Graph.cpp
        src/Graph/207.CourseSchedule.cpp


        test/include/test.h
        src/Graph/210.CourseScheII.cpp
        include/UnionFind.h
        src/Array/DistinctSubarray.cpp
        include/Array.h
        test/src/Array.cpp
        src/UnionFind/UnionFind.cpp
        test/src/UnionFind.cpp


        src/Array/36.ValidSudoku.cpp include/BackTracking.h src/BackTracking/17.LetterCombinPhone.cpp test/src/BackTracking.cpp src/Array/11.ContainerMostWater.cpp)

