//
// Created by Hansen Li on 4/8/23.
//

void merge(int *a, int len_a, int * b, int len_b, int *c){
    int i = 0;
    int j = 0;
    int k = 0;

    while( i < len_a and j < len_b){
        if (a[i] < b[j]){
            c[k++] = a[i++];
        }else{
            c[k++] = b[j++];
        }
    }

    while (i < len_a){
        c[k++] = a[i++];
    }
    while(j < len_b){
        c[k++] = b[j++];
    }
}

void merge(int *a, int l, int mid, int r){
    int i = l;
    int j = mid+1;
    int k = 0;
    int n = r - l + 1;
    int * temp = new int [n];
    while ( i<=mid and j <= r){
        if (a[i] < a[j]){
            temp[k++] = a[i++];
        }else{
            temp[k++] = a[j++];
        }
    }
    while ( i <= mid)temp[k++] = a[i++];
    while ( j <= r) temp [k++] = a[j++];

    for(int x = 0; x < n; x++){
        a[l + x] = temp[x];
    }
    delete [] temp;


}

void merge_sort(int *a, int l, int r){
    if (l == r)return;
    int mid = (l+r) >> 1;
    merge_sort(a, l, mid);
    merge_sort(a, mid+1, r);
    merge(a, l, mid, r);
}