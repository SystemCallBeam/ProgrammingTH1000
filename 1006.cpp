#include <bits/stdc++.h>
using namespace std;
int Cu[6] = {1, 2, 3, 5, 4, 6}, cube[6] = {1, 2, 3, 5, 4, 6};

void F(int cube[])
{
    int temp = cube[0];
    cube[0] = cube[3];
    cube[3] = cube[5];
    cube[5] = cube[1];
    cube[1] = temp;
}
void B(int cube[])
{
    int temp = cube[0];
    cube[0] = cube[1];
    cube[1] = cube[5];
    cube[5] = cube[3];
    cube[3] = temp;
}
void L(int cube[])
{
    int temp = cube[0];
    cube[0] = cube[4];
    cube[4] = cube[5];
    cube[5] = cube[2];
    cube[2] = temp;
}
void R(int cube[])
{
    int temp = cube[0];
    cube[0] = cube[2];
    cube[2] = cube[5];
    cube[5] = cube[4];
    cube[4] = temp;
}
void C(int cube[])
{
    int temp = cube[1];
    cube[1] = cube[4];
    cube[4] = cube[3];
    cube[3] = cube[2];
    cube[2] = temp;
}
void D(int cube[])
{
    int temp = cube[1];
    cube[1] = cube[2];
    cube[2] = cube[3];
    cube[3] = cube[4];
    cube[4] = temp;
}

int solve(string str, int cube[])
{
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        switch (str[i])
        {
        case 'F':
            F(cube);
            break;
        case 'B':
            B(cube);
            break;
        case 'L':
            L(cube);
            break;
        case 'R':
            R(cube);
            break;
        case 'C':
            C(cube);
            break;
        case 'D':
            D(cube);
            break;
        }
    }
    return cube[1];
}

void re(int cube[])
{
    for (int i = 0; i < 6; i++)
        cube[i] = Cu[i];
}

int main()
{
    int n;
    cin >> n;
    string str;
    int ans[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        ans[i] = solve(str, cube);
        re(cube);
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}