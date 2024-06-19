template <typename RandomAccessIterator, typename Compare>
void QuickSort(RandomAccessIterator first, RandomAccessIterator last, Compare comp) {
    if (first >= last) return;
    auto pivot = *first;
    auto left = first;
    auto right = last - 1;
    while (left < right) {
        while (!comp(pivot, *left) && left < last) left++;
        while (comp(pivot, *right) && right > first) right--;
        if (left < right) swap(*left, *right);
    }
    swap(*first, *right);
    QuickSort(first, right, comp);
    QuickSort(right + 1, last, comp);
}