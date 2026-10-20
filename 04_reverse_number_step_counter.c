#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int rev = 0, remainder;
    int count = 0;

    count++; // Initialization: rev = 0

    while (n != 0) {
        count++; // Loop test condition check (true)

        remainder = n % 10;
        count++; // Statement: remainder = n % 10

        rev = rev * 10 + remainder;
        count++; // Statement: rev = rev * 10 + remainder

        n /= 10;
        count++; // Statement: n /= 10
    }
    count++; // Loop test condition check (false/termination)

    count++; // Statement: print(rev)

    printf("%d", count);
    return 0;
}