#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, p;
    cin >> n >> m >> p;
    long long tmp = n % m, ans = 1, exp = p;
    // 再帰を使わない方法
    // 計算量はO(log(p))
    while (exp) {
        if (exp & 1) {
            ans *= tmp;
            ans %= m;
        }
        tmp *= tmp;
        tmp %= m;
        exp >>= 1;
    }
    cout << ans << endl;
    return 0;
}