//分迭代版本和递归版本
//这里是大根堆
//时间复杂度 O(nlogn)，空间复杂度 O(1)，不稳定排序。

#include<iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left < n && a[left] > a[largest]) largest = left;
    if(right < n && a[right] > a[largest]) largest = right;
    
    if(largest != i){
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapify2(int a[], int n, int i){
    while(true){
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;
        if(left < n && a[left] > a[largest])
            largest = left;
        if(right < n && a[right] > a[largest])
            largest = right;
        
        if(largest == i) break;
        swap(a[i], a[largest]);
        i = largest;
    }
}

void heap_sort(int a[], int n){
    for(int i = n/2 - 1; i >= 0; i --){
        heapify(a, n, i);  
    }
    for(int i = n - 1; i > 0; i --){
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
