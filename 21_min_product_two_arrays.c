#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int cmp_desc(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x > y) return -1;
    if (x < y) return 1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    long long array_One[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &array_One[i]);
    }

    long long array_Two[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &array_Two[i]);
    }

    qsort(array_One, n, sizeof(long long), cmp_asc);
    qsort(array_Two, n, sizeof(long long), cmp_desc);

    long long min_sum = 0;
    for (int i = 0; i < n; i++) {
        min_sum += array_One[i] * array_Two[i];
    }

    printf("%lld\n", min_sum);

    return 0;
}