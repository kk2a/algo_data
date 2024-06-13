#include <bits/stdc++.h>
using namespace std;

void BubbleSort_int(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool swapped = false;

        // 最後のi個の要素はすでにソートされているので，
        // n - iまでループ
        // a[j]とa[j + 1]を比較するので，
        // j < n - i - 1までループすることに注意
        for (int j = 0; j < n - i - 1; j++) {
            // 隣接要素を比較し、順番が逆なら交換
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // swappedがfalseの場合、配列はすでにソートされている
        if (!swapped) break;
    }
}

int main() {
    vector<int> arr = {21, 13, 8, 5, 3, 2, 1, 1};
    BubbleSort_int(arr);
    for (auto x : arr) cout << x << " ";
    cout << endl;
    // 配列が降順になっている場合，ループが最後まで行われるため，
    // 時間計算量はO(n^2)となる．

    return 0;
}