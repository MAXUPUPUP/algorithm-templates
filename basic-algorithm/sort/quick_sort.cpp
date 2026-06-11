//O(n log n) 平均时间复杂度，O(n^2) 最坏时间复杂度，O(log n) 平均空间复杂度，O(n) 最坏空间复杂度，不稳定排序
//https://www.acwing.com/problem/content/787/
//注意快速选择
//快速排序：先干活，后递归。先排好再分下去
//与归并排序的区别是，快速排序是原地排序，不需要额外的空间，而归并排序需要 O(n) 的额外空间来合并两个有序子数组。

#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N];

void quick_sort(int a[], int l, int r){
    if(l >= r) return;
    
    int i = l - 1, j = r + 1, x = a[l + r >> 1];
    while(i < j){
        do i ++; while(a[i] < x);
        do j --; while(a[j] > x);
        if(i < j) swap(a[i], a[j]);
    }
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);  
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    } 
    quick_sort(a, 0, n - 1);
    for(int i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
    return 0;
}