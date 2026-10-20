#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], dp[n];
    int maxLength = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        dp[i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] <= a[i] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }

        if (dp[i] > maxLength)
            maxLength = dp[i];
    }

    printf("%d", maxLength);

    return 0;
}