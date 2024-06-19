template <typename RandomAccessIterator>
void BucketSort(RandomAccessIterator first, RandomAccessIterator last) {
    auto size = last - first;
    if (size <= 1) return;
    auto minmax = minmax_element(first, last);
    auto min = *minmax.first;
    auto max = *minmax.second;
    auto bucketSize = max - min + 1;
    vector<int> bucket(bucketSize);
    for (auto it = first; it != last; it++) {
        bucket[*it - min]++;
    }
    for (int i = 0, j = 0; i < bucketSize; i++) {
        while (bucket[i]--) {
            *first++ = i + min;
        }
    }
}