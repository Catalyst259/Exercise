#include <iostream>
using namespace std;
const long long MOD = 200907;

// 快速幂：计算 (a^e) % MOD
long long mod_pow(long long a, long long e) {
    a %= MOD;
    long long res = 1 % MOD;
    while (e > 0) {
        if (e & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        long long a1, a2, a3, n;
        cin >> a1 >> a2 >> a3 >> n;

        long long ans;

        // 等差：a1 + a3 = 2 * a2
        if (a1 + a3 == 2 * a2) {
            long long d = (a2 - a1) % MOD;     // 公差
            if (d < 0) d += MOD;
            long long t = (n - 1) % MOD;
            ans = ( (a1 % MOD) + (t * d) % MOD ) % MOD;
        } else { // 等比
            long long r = a2 / a1;             // 公比（原始整数）
            long long p = mod_pow(r, n - 1);   // r^(n-1) % MOD
            ans = ( (a1 % MOD) * p ) % MOD;
        }

        if (ans < 0) ans += MOD;
        cout << ans << "\n";
    }

    return 0;
}