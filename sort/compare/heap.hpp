template <typename RandomAccessIterator, typename Compare>
void downHeap(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator it, Compare comp) {
    auto size = last - first;
    auto parent = it - first;
    auto left = 2 * parent + 1;
    auto right = 2 * parent + 2;
    auto largest = parent;
    if (left < size && comp(*(first + largest), *(first + left))) largest = left;
    if (right < size && comp(*(first + largest), *(first + right))) largest = right;
    if (largest != parent) {
        swap(*(first + parent), *(first + largest));
        downHeap(first, last, first + largest, comp);
    }
}

template <typename RandomAccessIterator, typename Compare>
void buildHeap(RandomAccessIterator first, RandomAccessIterator last, Compare comp) {
    auto size = last - first;
    for (auto i = size / 2 - 1; i >= 0; i--) {
        downHeap(first, last, first + i, comp);
    }
}

template <typename RandomAccessIterator, typename Compare>
void HeapSort(RandomAccessIterator first, RandomAccessIterator last, Compare comp) {
    buildHeap(first, last, comp);
    for (auto it = last - 1; it != first; it--) {
        swap(*first, *it);
        downHeap(first, it, first, comp);
    }
}
