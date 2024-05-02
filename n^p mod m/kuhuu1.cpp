#include<bits/stdc++.h>
using namespace std;

// return n^p % m
// 計算量はO(log(p))
long long power(long long n, long long p, long long m) {
    n %= m;
    if (n < 0) n += m;
    if (p == 0) return 1;
    long long res = power(n, p / 2, m);
    if (p % 2 == 0) return (res * res) % m;
    else return (res * res) % m * n % m;
}

int main(){
    long long n, m, p;
    cin >> n >> m >> p;
    cout << power(n, p, m) << endl;
    return 0;
}