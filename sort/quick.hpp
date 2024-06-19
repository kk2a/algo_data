template <typename RandomAccessIterator>
void QuickSort(RandomAccessIterator first, RandomAccessIterator last) {
    if (first >= last) return;
    auto pivot = *first;
    auto left = first;
    auto right = last - 1;
    while (left < right) {
        while (*left <= pivot && left < last) left++;
        while (*right > pivot && right > first) right--;
        if (left < right) swap(*left, *right);
    }
    swap(*first, *right);
    QuickSort(first, right);
    QuickSort(right + 1, last);
}