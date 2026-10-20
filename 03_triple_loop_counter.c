#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int i, j, k, c = 0;
    count++; // count for c = 0 assignment

    for (i = n / 2; count++, i < n; i++) {
        for (j = 1; count++, j < n; j = 2 * j) {
            for (k = 1; count++, k < n; k = k * 2) {
                count++; // c++ execution
                c++;
            }
        }
    }

    printf("%d", count);
    return 0;
}