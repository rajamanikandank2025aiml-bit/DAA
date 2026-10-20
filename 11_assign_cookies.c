#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long l_a = *(const int *)a;
    long l_b = *(const int *)b;
    if (l_a < l_b) return -1;
    if (l_a > l_b) return 1;
    return 0;
}

int main() {
    int n, m;

    if (scanf("%d", &n) != 1) return 0;
    int g[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &g[i]);
    }

    if (scanf("%d", &m) != 1) return 0;
    int s[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &s[i]);
    }

    qsort(g, n, sizeof(int), compare);
    qsort(s, m, sizeof(int), compare);

    int child = 0, cookie = 0;
    while (child < n && cookie < m) {
        if (s[cookie] >= g[child]) {
            child++;
        }
        cookie++;
    }

    printf("%d\n", child);
    return 0;
}