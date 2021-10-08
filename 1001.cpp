#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int n, m; 
    cin >> n >> m;
    char table[n][m + 1];
    int bug[m], box[m];

    for (int i = 0; i < m; i++)
        bug[i] = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> table[i][j];
            if (table[i][j] == 'O' && bug[j] > i)
            {
                bug[j] = i;
            }
        }
    }

    for (int i = 0; i < m; i++)
        cin >> box[i];

    /*for (int i = 0; i < m; i++)
    {
        for (int j = bug[i] - 1; j >= bug[i] - box[i]; j--)
        {
            table[j][i] = '#';
        }
    }*/
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", table[i][j]);
            //cout << table[i][j];
        }
        printf("\n");
        //cout << '\n';
    }
    return 0;
}