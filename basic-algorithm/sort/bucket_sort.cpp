//经典版针对均匀分布在 [0, 1) 的浮点数：
//时间复杂度 O(n + k)，空间复杂度 O(n + k)，稳定排序
//k 是桶的数量，通常取 n。每个桶内使用快速排序或其他 O(m log m) 的排序算法，m 是桶内元素数量。
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void bucketSort(float a[], int n) {
    vector<vector<float>> buckets(n);          // 开 n 个桶
    for (int i = 0; i < n; i++) {
        int idx = n * a[i];                    // 按值映射到对应的桶
        buckets[idx].push_back(a[i]);
    }
    for (int i = 0; i < n; i++)
        sort(buckets[i].begin(), buckets[i].end());   // 每个桶内部排序
    int idx = 0;
    for (int i = 0; i < n; i++)                // 按桶顺序依次取出
        for (float v : buckets[i])
            a[idx++] = v;
}

//整数、值域小 → 计数排序最直接；
//整数、值域大但位数有限 → 基数排序；
//数据近似均匀分布（尤其浮点数）→ 桶排序。它们能比 O(n log n) 快的代价是：都对数据有额外假设，且都需要 O(n) 或 O(n+k) 的额外空间，不像快排、堆排那样通用。