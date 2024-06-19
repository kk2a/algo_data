template <typename RandomAccessIterator>
void InsertionSort(RandomAccessIterator first, RandomAccessIterator last) {
    for (auto it = first + 1; it != last; it++) {
        auto key = *it;
        auto jt = it - 1;
        while (jt >= first && *jt > key) {
            *(jt + 1) = *jt;
            jt--;
        }
        *(jt + 1) = key;
    }
}