#include <bits/stdc++.h>
using namespace std;

#include "compare/insertion.hpp"
#include "compare/merge.hpp"
#include "compare/bubble.hpp"
#include "compare/quick.hpp"
#include "compare/heap.hpp"

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    vector<int> tmp;

    tmp = arr;
    InsertionSort(begin(tmp), end(tmp), greater<int>());
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    MergeSort(begin(tmp), end(tmp), greater<int>());
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    BubbleSort(begin(tmp), end(tmp), greater<int>());
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    QuickSort(begin(tmp), end(tmp), greater<int>());
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    tmp = arr;
    HeapSort(begin(tmp), end(tmp), greater<int>());
    for (auto x : tmp) cout << x << ' ';
    cout << '\n';

    return 0;
}