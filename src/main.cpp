#include <iostream>
#include <vector>
#include "../include/LinkedList.h"
#include "../include/Sorting.h"
#include "../include/String.h"
using namespace std;


int main() {
    std::cout << "testing..." << std::endl;
//    cout<<std::isupper('3');

//    auto res = addBinary("101", "1");
//    auto res = My_addBinary("111", "1");
//    cout<<res;
    int a[5] = {1,4,5,3,2};

    merge_sort(a, 0, 4);
    for(int i =0;i<5;i++){
        cout<<a[i]<<endl;
    }





//    test_ReverseList();

//    int a [5] = {5, 6, 8,7, 0};
//    QuickSort_iter(a, 5);
//    for (int i=0;i<5;i++){
//        cout<< a[i] << " ";
//    }


    return 0;
}
