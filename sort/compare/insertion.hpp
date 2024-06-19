template <typename RandomAccessIterator, typename Compare>
void InsertionSort(RandomAccessIterator first, RandomAccessIterator last, Compare comp) {
    for (auto it = first + 1; it != last; it++) {
        auto key = *it;
        auto jt = it - 1;
        while (jt >= first && comp(key, *jt)) {
            *(jt + 1) = *jt;
            jt--;
        }
        *(jt + 1) = key;
    }
}