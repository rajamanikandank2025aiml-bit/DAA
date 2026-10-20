#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000], s2[1000];
    int dp[1001][1001];

    scanf("%s", s1);
    scanf("%s", s2);

    int m = strlen(s1);
    int n = strlen(s2);

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1])
                            ? dp[i - 1][j]
                            : dp[i][j - 1];
            }
        }
    }

    printf("%d", dp[m][n]);

    return 0;
}