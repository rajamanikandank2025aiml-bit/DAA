#include <stdio.h>

int findFirstZero(int arr[], int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == 0 && (mid == 0 || arr[mid - 1] == 1)) {
            return mid;
        }

        if (arr[mid] == 0) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first_zero_index = findFirstZero(arr, 0, n - 1);

    if (first_zero_index == -1) {
        printf("0\n");
    } else {
        printf("%d\n", n - first_zero_index);
    }

    return 0;
}