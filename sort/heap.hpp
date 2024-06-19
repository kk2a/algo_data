template <typename RandomAccessIterator>
void downHeap(RandomAccessIterator first, RandomAccessIterator last, RandomAccessIterator it) {
    auto size = last - first;
    auto parent = it - first;
    auto left = 2 * parent + 1;
    auto right = 2 * parent + 2;
    auto largest = parent;
    if (left < size && *(first + left) > *(first + largest)) largest = left;
    if (right < size && *(first + right) > *(first + largest)) largest = right;
    if (largest != parent) {
        swap(*(first + parent), *(first + largest));
        downHeap(first, last, first + largest);
    }
}

template <typename RandomAccessIterator>
void buildHeap(RandomAccessIterator first, RandomAccessIterator last) {
    auto size = last - first;
    for (auto i = size / 2 - 1; i >= 0; i--) {
        downHeap(first, last, first + i);
    }
}

template <typename RandomAccessIterator>
void HeapSort(RandomAccessIterator first, RandomAccessIterator last) {
    buildHeap(first, last);
    for (auto it = last - 1; it != first; it--) {
        swap(*first, *it);
        downHeap(first, it, first);
    }
}