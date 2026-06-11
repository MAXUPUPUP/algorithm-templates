// 前缀函数 (KMP)
// 用途  : 字符串匹配 / 求最长 border / 周期问题
// 复杂度: O(n)
// 验证  : Luogu P3375（KMP 字符串匹配）
// 易错  : pi[0] = 0;匹配文本时把 pattern + '#' + text 拼起来跑前缀函数最稳
vector<int> prefix_function(const string& s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

// 在 text 中找 pattern 所有出现位置(0-indexed 起点)
vector<int> kmp_match(const string& text, const string& pattern) {
    string s = pattern + '\x01' + text;     // 分隔符需保证不出现在两串中
    vector<int> pi = prefix_function(s), res;
    int m = pattern.size();
    for (int i = m + 1; i < (int)s.size(); i++)
        if (pi[i] == m) res.push_back(i - 2 * m);
    return res;
}
