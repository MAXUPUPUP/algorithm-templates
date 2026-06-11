# Algorithm Templates

我的算法竞赛 / 刷题板子库。每个模板都经过例题验证,可复制即用。

## 约定

- 语言:C++（如果你主用 Python/Java，把示范板子换成你的语言即可）
- 所有板子默认已 `#include <bits/stdc++.h>` 和 `using namespace std;`，文件内不再重复
- 每个板子文件头部统一注明:**用途 / 复杂度 / 验证例题 / 易错点**
- 下标约定写在各文件里（多数数据结构用 0-indexed，树状数组用 1-indexed）

## 目录

### data-structure（数据结构）
- [并查集 DSU](data-structure/dsu.cpp) — 合并 / 查询连通性
- [树状数组 Fenwick](data-structure/fenwick.cpp) — 单点改 + 前缀和

### graph（图论）
- [Dijkstra（堆优化）](graph/dijkstra.cpp) — 非负权单源最短路

### string（字符串）
- [前缀函数 KMP](string/kmp.cpp) — 匹配 / border

### math（数学）
- [快速幂 + 逆元](math/fast-pow.cpp) — 模幂 / 费马小定理求逆

### dp / geometry / misc
待补充。

## 验证状态

| 模板 | 验证例题 | 状态 |
|------|----------|------|
| DSU | yosupo: unionfind | ✅ |
| Fenwick | yosupo: point_add_range_sum | ✅ |
| Dijkstra | yosupo: shortest_path | ✅ |
| KMP | Luogu P3375 | ✅ |
| 快速幂 | Luogu P1226 | ✅ |

## 添加新板子的小约定

1. 写完先用一道 AC 过的题验证，再放进来
2. 文件头补上「用途 / 复杂度 / 验证链接 / 易错点」四行
3. 更新上面的目录和验证表

> 没验证过的板子不要进主目录——比赛时坑的是自己。
