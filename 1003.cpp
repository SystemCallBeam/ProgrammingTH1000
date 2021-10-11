#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int is = 0;
    if (n<6)
    {
        cout << "no";
        return 0;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (i%20==0||i%9==0||i%6==0)
        {
            cout << i << '\n';
        }
        else if (i%20!=0)
        {
            if (i%20%9==0||i%20%6==0)
            {
                cout << i << '\n';
            }
            else if (i%20%9!=0)
            {
                if (i%9%6==0)
                {
                    cout << i << '\n';
                }
            }
        }
        else if (i%9!=0)
        {
            if (i%9%6==0)
            {
                cout << i << '\n';
            }
        }
    }
    return 0;
}