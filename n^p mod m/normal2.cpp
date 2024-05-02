#include<bits/stdc++.h>
using namespace std;

// return n^p % m
// 計算量はO(p)
long long pow(long long n, long long p, long long m) {
    if (p == 0) return 1;
    return n * pow(n, p - 1, m) % m;
}

int main(){
    long long n, m, p;
    cout << pow(n, m, p) << endl;
    return 0;
}