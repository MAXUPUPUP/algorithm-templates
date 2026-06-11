// 并查集 DSU (Disjoint Set Union / Union-Find)
// 用途  : 维护不相交集合,支持合并与查询连通性
// 复杂度: 近似 O(α(n)) 每次操作（路径压缩 + 按大小合并）
// 验证  : https://judge.yosupo.jp/problem/unionfind
// 易错  : unite 前先判是否已同集合;0-indexed

