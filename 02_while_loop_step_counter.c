#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int count = 0;

    int i = 1;
    count++; // count for i = 1 assignment

    int s = 1;
    count++; // count for s = 1 assignment

    while (s <= n) {
        count++; // count for while condition test (true branch)
        i++;
        count++; // count for i++ statement
        s += i;
        count++; // count for s += i statement
    }
    count++; // count for while condition test (final false branch)

    printf("%d\n", count);

    return 0;
}