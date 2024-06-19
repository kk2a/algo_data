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