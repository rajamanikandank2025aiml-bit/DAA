#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long arg1 = *(const long long *)a;
    long long arg2 = *(const long long *)b;

    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    long long *calories = (long long *)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &calories[i]);
    }

    qsort(calories, n, sizeof(long long), compare);

    unsigned long long total = 0;
    unsigned long long multiplier = 1;

    for (int i = 0; i < n; i++) {
        total += (unsigned long long)calories[i] * multiplier;
        multiplier *= 3ULL;
    }

    printf("%llu\n", total);

    free(calories);
    return 0;
}