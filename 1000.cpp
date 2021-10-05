#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, cnt = 0;
    scanf("%d %d ", &m, &n);
    char str[n][m + 1];
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);
    for (int i = 0; i < n - 1; i++)
    {
        cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] != str[i + 1][j])
                cnt++;
            if (cnt > 2)
            {
                printf("%s ", str[i]);
                return 0;
            }
        }
    }
    printf("%s ", str[n - 1]);
    return 0;
}