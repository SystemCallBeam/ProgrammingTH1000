#include<bits/stdc++.h>
using namespace std;

void skyline(int S[][255], int mem[]){
    int h = -1, c = -1, a = 0;
    for (int i = 0; i < 255; i++)
    {
        if (S[h+1][c+1])
        {
            mem[a++]=i;
        }
        
        while (S[h++][i])
        {
            
        }
        mem[a++]=h-1;
    }
    
}
int main(){
    int S[255][255] = {}, n, l, h[3], r[3];
    cin >> n;
    int mem[n*4];
    for (int i = 0; i < n; i++)
    {
        cin >> l >> h[0] >> r[0];
        if (r[0] > r[1])
        {
            r[1] = r[0];
        }
        
        for (int j = 0; j < h[0]; j++)
        {
            for (int k = l-1; k < r[0]; k++)
            {
                S[j][k]++;
            }
            
        }
        
    }
    skyline(S, mem);
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            printf("%3d", S[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}