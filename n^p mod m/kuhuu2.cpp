#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, p;
    cin >> n >> m >> p;
    long long tmp = n % m, ans = 1;
    // 再帰を使わない方法
    // 計算量はO(log(p))
    for (int b = 0; (1ll << b) <= p; b++) {
        if ((1ll << b) & p) {
            ans *= tmp;
            ans %= m;
        }
        tmp *= tmp;
        tmp %= m;
    }
    cout << ans << endl;
    return 0;
}