//时间复杂度 O(d*(n+10))，空间复杂度 O(n+10)，稳定排序

#include<iostream>
#include<vector>
using namespace std;

void radixSort(int a[], int n){
    if(n <= 0) return;
    int maxVal = a[0];
    for(int i = 1; i < n; i ++) maxVal = max(maxVal, a[i]);

    vector<int> ans(n);
    for(int exp = 1; maxVal/exp > 0; exp *= 10){
        int cnt[10] = {0};
        for(int i = 0; i < n; i ++) cnt[a[i]/exp % 10] ++;
        for(int i = 1; i < 10; i ++) cnt[i] += cnt[i - 1];
        for(int i = n - 1; i >= 0; i --){
            cnt[a[i]/exp % 10] --;
            ans[cnt[a[i]/exp % 10]] = a[i];
        }
        for(int i = 0; i < n; i ++) a[i] = ans[i];
    }

}