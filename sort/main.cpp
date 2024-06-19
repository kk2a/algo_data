#include <bits/stdc++.h>
using namespace std;

#include "insertion.hpp"
#include "merge.hpp"
#include "bubble.hpp"
#include "quick.hpp"
#include "heap.hpp"
#include "bucket.hpp"

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    vector<int> tmp;

    tmp = arr;
    InsertionSort(begin(tmp), end(tmp));
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    MergeSort(begin(tmp), end(tmp));
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    BubbleSort(begin(tmp), end(tmp));
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    QuickSort(begin(tmp), end(tmp));
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    HeapSort(begin(tmp), end(tmp));
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    BucketSort(begin(tmp), end(tmp));
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';
    

    return 0;
}