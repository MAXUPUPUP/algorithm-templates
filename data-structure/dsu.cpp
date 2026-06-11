// 并查集 DSU (Disjoint Set Union / Union-Find)
// 用途  : 维护不相交集合,支持合并与查询连通性
// 复杂度: 近似 O(α(n)) 每次操作（路径压缩 + 按大小合并）
// 验证  : https://judge.yosupo.jp/problem/unionfind
// 易错  : unite 前先判是否已同集合;0-indexed
struct DSU {
    vector<int> fa, sz;
    DSU(int n) : fa(n), sz(n, 1) { iota(fa.begin(), fa.end(), 0); }
    int find(int x) { return fa[x] == x ? x : fa[x] = find(fa[x]); }
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (sz[x] < sz[y]) swap(x, y);
        fa[y] = x;
        sz[x] += sz[y];
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return sz[find(x)]; }
};
