#include <iostream>
#include <vector>
#include "../include/LinkedList.h"
#include "../include/Sorting.h"
using namespace std;


int main() {
    std::cout << "testing..." << std::endl;

//    test_ReverseList();
    int a [5] = {5, 6, 8,7, 0};
    QuickSort(a, 0, 5);
    for (int i=0;i<5;i++){
        cout<< a[i] << " ";
    }
    return 0;
}
