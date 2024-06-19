#include <bits/stdc++.h>
using namespace std;

#include "insertion.hpp"
#include "merge.hpp"
#include "bubble.hpp"
#include "quick.hpp"
#include "heap.hpp"
#include "bucket.hpp"

void randomize(vector<int> &arr) {
    mt19937_64 rng(time(0));
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = rng() % arr.size();
    }
}

void rev(vector<int> &arr) {
    iota(rbegin(arr), rend(arr), 0);
}

void diff(vector<int> &arr, int m) {
    if (arr.size() <= 1) return;
    arr[0] = 0;
    arr[1] = m;
}

int main() {
    mt19937_64 rng(time(0));
    int N = 100000;

    vector<int> arr(N), tmp;
    // randomize(arr);
    // rev(arr);
    // diff(arr, M);
    iota(begin(arr), end(arr), 0);

    chrono::system_clock::time_point startt, endt;

    // tmp = arr;
    // startt = chrono::system_clock::now();
    // BubbleSort(begin(tmp), end(tmp));
    // endt = chrono::system_clock::now();
    // cout << "BubbleSort: " << chrono::duration_cast<chrono::milliseconds>(endt - startt).count() << "ms" << endl;

    tmp = arr;
    startt = chrono::system_clock::now();
    BucketSort(begin(tmp), end(tmp));
    endt = chrono::system_clock::now();
    cout << "BucketSort: " << chrono::duration_cast<chrono::milliseconds>(endt - startt).count() << "ms" << endl;

    tmp = arr;
    startt = chrono::system_clock::now();
    HeapSort(begin(tmp), end(tmp));
    endt = chrono::system_clock::now();
    cout << "HeapSort: " << chrono::duration_cast<chrono::milliseconds>(endt - startt).count() << "ms" << endl;

    tmp = arr;
    startt = chrono::system_clock::now();
    InsertionSort(begin(tmp), end(tmp));
    endt = chrono::system_clock::now();
    cout << "InsertionSort: " << chrono::duration_cast<chrono::milliseconds>(endt - startt).count() << "ms" << endl;

    tmp = arr;
    startt = chrono::system_clock::now();
    MergeSort(begin(tmp), end(tmp));
    endt = chrono::system_clock::now();
    cout << "MergeSort: " << chrono::duration_cast<chrono::milliseconds>(endt - startt).count() << "ms" << endl;

    tmp = arr;
    startt = chrono::system_clock::now();
    QuickSort(begin(tmp), end(tmp));
    endt = chrono::system_clock::now();
    cout << "QuickSort: " << chrono::duration_cast<chrono::milliseconds>(endt - startt).count() << "ms" << endl;

    return 0;
}