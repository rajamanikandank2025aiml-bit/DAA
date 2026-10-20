#include <stdio.h>

int recursiveBinarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    if (arr[mid] > target) {
        return recursiveBinarySearch(arr, low, mid - 1, target);
    } else {
        return recursiveBinarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("No\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        int complement = x - arr[i];

        int index = recursiveBinarySearch(arr, i + 1, n - 1, complement);

        if (index != -1) {
            printf("%d\n%d\n", arr[i], arr[index]);
            found = 1;
            break;
        }
    }

    return 0;
}