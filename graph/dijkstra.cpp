// Dijkstra（堆优化）
// 用途  : 非负权图单源最短路
// 复杂度: O((V + E) log V)
// 验证  : https://judge.yosupo.jp/problem/shortest_path
// 易错  : 权值必须非负;dist 用 long long 防溢出;出队时 d > dist[u] 跳过
// 输入  : g 为邻接表, g[u] = { {v, w}, ... } 表示 u->v 权 w
vector<long long> dijkstra(int s, const vector<vector<pair<int, int>>>& g) {
    int n = g.size();
    vector<long long> dist(n, LLONG_MAX);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    dist[s] = 0;
    pq.push({0, s});
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;          // 过期的旧记录
        for (auto [v, w] : g[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;                            // 不可达为 LLONG_MAX
}
