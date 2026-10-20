#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;

    int count = 0;

    for (int i = 1; i <= num; ++i) {
        count++; // i <= num condition test (for each true iteration)
        count++; // num % i == 0 modulo test

        if (num % i == 0) {
            count++; // printf("%d ", i) statement
        }
    }

    count++; // final i <= num condition test (when i > num evaluates to false)

    printf("%d\n", count);

    return 0;
}