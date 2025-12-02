#include <vector>
#include <cmath>
#include <iostream>
int n;
std::vector<bool> isPrime;

void sieve(int limit) {
    isPrime.assign(limit + 1, true);
    if (limit >= 0) isPrime[0] = false;
    if (limit >= 1) isPrime[1] = false;

    int bound = static_cast<int>(std::sqrt(limit));
    for (int i = 2; i <= bound; ++i) {
        if (!isPrime[i]) continue;
        for (long long j = 1LL * i * i; j <= limit; j += i) {
            isPrime[j] = false;
        }
    }
}

bool judge(int k) {
    while (k > 0) {
        if (!isPrime[k]) return false;
        k /= 10;
    }
    return true;
}

int main() {
    std::cin >> n;
    sieve(n);
    int cnt = 0;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i] && judge(i)) {
            ++cnt;
        }
    }
    std::cout << cnt << "\n";
}