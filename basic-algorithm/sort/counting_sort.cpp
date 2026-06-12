//计数排序：适用于元素范围较小的整数排序，时间复杂度 O(n + k)，空间复杂度 O(k)，稳定排序
//k是元素的最大值。
//当 k 不大时非常快。缺点也明显：值域很大（比如出现 10 亿）就会爆内存。
#include<iostream>
#include<vector>
using namespace std;

void countingSort(int a[], int n){
    if(n <= 0) return;
    int maxVal = a[0];
    for(int i = 1; i < n; i ++) maxVal = max(maxVal, a[i]);
    
    vector<int> cnt(maxVal + 1, 0);
    for(int i = 0; i < n; i ++) cnt[a[i]] ++;
    for(int i = 1; i <= maxVal; i ++) cnt[i] += cnt[i - 1];

    vector<int> ans(n);
    for(int i = n - 1; i >= 0; i --){
        cnt[a[i]] --;
        ans[cnt[a[i]]] = a[i];
        
    }
    for(int i = 0; i < n; i ++) a[i] = ans[i];

    
}

