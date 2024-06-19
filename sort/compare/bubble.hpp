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