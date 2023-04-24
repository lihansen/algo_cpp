//
// Created by Hansen Li on 4/13/23.
//


// O(n^2), stable sorting
void InsertionSort(int *a, int n){
    for(int i = 1; i<n; i++){
        int key = a[i]; // take this elem for insertion
        int j;
        for(j = i - 1; j >=0 and key < a[j]; j --) // findRoot the position that small enough
            a[j+1] = a[j];
        a[j+1] = key; // put the key here
    }
}