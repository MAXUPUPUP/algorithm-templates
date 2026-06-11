// 树状数组 Fenwick Tree (Binary Indexed Tree)
// 用途  : 单点修改 + 前缀和 / 区间和查询
// 复杂度: O(log n) 每次操作
// 验证  : https://judge.yosupo.jp/problem/point_add_range_sum
// 易错  : 下标从 1 开始;区间 [l,r] = query(r) - query(l-1)
struct Fenwick {
    int n;
    vector<long long> t;
    Fenwick(int n) : n(n), t(n + 1, 0) {}
    void add(int i, long long v) {          // 第 i 个位置加 v (1-indexed)
        for (; i <= n; i += i & -i) t[i] += v;
    }
    long long query(int i) {                // 前缀和 [1, i]
        long long s = 0;
        for (; i > 0; i -= i & -i) s += t[i];
        return s;
    }
    long long query(int l, int r) {         // 区间和 [l, r]
        return query(r) - query(l - 1);
    }
};
