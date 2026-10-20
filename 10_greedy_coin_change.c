#include <stdio.h>

int main() {
    int V;
    if (scanf("%d", &V) != 1) return 0;

    int coins[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int num_coins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;

    for (int i = 0; i < num_coins; i++) {
        count += V / coins[i];
        V %= coins[i];
    }

    printf("%d\n", count);
    return 0;
}