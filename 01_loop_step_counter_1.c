#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int count = 0;

    count++; // count for if (n == 1) check

    if (n == 1) {
        count++; // count for printf("*")
    } else {
        count++; // initial check for i <= n (or false check at end)

        for (int i = 1; i <= n; i++) {
            count++; // for i <= n condition / i++ increment

            for (int j = 1; j <= n; j++) {
                count++; // j <= n condition check
                count++; // first printf("*")
                count++; // second printf("*")
                count++; // break statement
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}