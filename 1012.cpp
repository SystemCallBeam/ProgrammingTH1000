#include<bits/stdc++.h>
#define check for (int i = 0; i < 5; i++)cout << s[i] << ' ';
#define enl cout << '\n';
using namespace std ;

int solve(int s[], int ans){
    check enl
    ans += s[0] + s[1];
    (s[2]%2)?ans += s[2]/2+1:ans += s[2]/2;
    cout << ans << endl;
    s[3] -= s[1] + (s[2]%2)*2;
    check enl
    if (s[3] > 0)
    {
        if (s[3]%4)
        {
            ans += s[3]/4 +1
            s[3]
        }
        
        (s[3]%4)?ans += s[3]/4+1:ans += s[3]/4;
    }
    cout << ans << endl;
    (s[3]%4>0)?s[4] -= (4-s[3])*2:s[4] -= abs(s[3])*2;
    check
    if (s[4]>0)
    {
        (s[4]%8)?ans += s[4]/8+1:ans += s[4]/8;
    }
    enl
    return ans;
}
int main(){
    int n, ts, ans = 0;
    int s[5] = {}; // 1  3/4  1/2  1/4  1/8
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> ts;
            s[i] += ts;
        }
        
    }
    cout << solve(s, ans);
    //check
    return 0;
}