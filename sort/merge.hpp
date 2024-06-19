template <typename RandomAccessIterator>
void MergeSort(RandomAccessIterator first, RandomAccessIterator last) {
    if (last - first <= 1) return;
    auto mid = first + (last - first) / 2;
    MergeSort(first, mid);
    MergeSort(mid, last);
    vector<typename iterator_traits<RandomAccessIterator>::value_type> tmp(last - first);
    auto it = begin(tmp);
    auto i = first, j = mid;
    while (i < mid && j < last) {
        if (*i < *j) *it++ = *i++;
        else *it++ = *j++;
    }
    while (i < mid) *it++ = *i++;
    while (j < last) *it++ = *j++;
    copy(begin(tmp), end(tmp), first);
}