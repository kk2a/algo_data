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

// 以下はテンプレートの意味が分かる人向け
template <typename T>
void BubbleSort(vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

template <typename RandomAccessIterator>
void BubbleSort(RandomAccessIterator first, RandomAccessIterator last) {
    int n = last - first;
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (*(first + j) > *(first + j + 1)) {
                swap(*(first + j), *(first + j + 1));
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

template <typename RandomAccessIterator, typename Compare>
void BubbleSort(RandomAccessIterator first, RandomAccessIterator last, Compare comp) {
    int n = last - first;
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (comp(*(first + j + 1), *(first + j))) {
                swap(*(first + j), *(first + j + 1));
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> arr0 = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<long long> arr1 = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int> tmp_int;
    vector<long long> tmp_ll;

    tmp_int = arr0;
    BubbleSort_int(tmp_int);
    for (auto x : tmp_int) cout << x << " ";
    cout << endl;
    // 1 1 2 3 4 5 6 9

    // 以下は気にしなくていいです
    tmp_int = arr0;
    BubbleSort(tmp_int);
    for (auto x : tmp_int) cout << x << " ";
    cout << endl;
    // 1 1 2 3 4 5 6 9

    tmp_ll = arr1;
    BubbleSort(tmp_ll);
    for (auto x : tmp_ll) cout << x << " ";
    cout << endl;
    // 1 1 2 3 4 5 6 9

    // tmp_ll = arr1;
    // BubbleSort_int(tmp_ll);
    // for (auto x : tmp_ll) cout << x << " ";
    // cout << endl;
    // 1 1 2 3 4 5 6 9
    // コンパイルエラー

    tmp_int = arr0;
    BubbleSort(begin(tmp_int), end(tmp_int));
    for (auto x : tmp_int) cout << x << " ";
    cout << endl;
    // 1 1 2 3 4 5 6 9

    tmp_int = arr0;
    BubbleSort(begin(tmp_int) + 2, begin(tmp_int) + 6);
    for (auto x : tmp_int) cout << x << " ";
    cout << endl;
    // 3 1 1 4 5 9 2 6

    return 0;
}