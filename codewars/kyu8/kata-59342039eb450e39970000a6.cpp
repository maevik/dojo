int odd_count(int n) {
    int count = 0;

    for (int i = 1; i < n; i += 2) {
        count++;
    }

    return count;
}
