// 快速幂 / 模幂 + 模逆元
// 用途  : 快速计算 a^b mod m;费马小定理求逆元
// 复杂度: O(log b)
// 验证  : Luogu P1226（快速幂）
// 易错  : 用 long long 防溢出;inv 要求 mod 为质数且 a 不是 mod 的倍数
long long power(long long a, long long b, long long mod) {
    a %= mod;
    if (a < 0) a += mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

// 模逆元(mod 为质数时):a^{-1} ≡ a^{mod-2} (mod)
long long inv(long long a, long long mod) {
    return power(a, mod - 2, mod);
}
