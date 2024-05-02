#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, p;
    cin >> n >> m >> p;
    long long ans = 1;

    // 計算量はO(p)
    for (int _ = 0; _ < p; _++) {
        ans *= n;
        ans %= m;
    }

    cout << ans << endl;
    return 0;
}