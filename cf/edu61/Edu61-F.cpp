/*
 * @Author: czqsole
 * @Date: 2019-03-05
 */
//#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
const int N = 505;

int dp[N][N];
string s;

int calc(int l, int r) {
    if(l > r) return 0;
    if(l == r) return 1;
    if(dp[l][r] != -1) return dp[l][r];

    int ans = calc(l+1, r) + 1;
    for(int x = l+1;x <= r;x ++) {
        if(s[x] == s[l]) {
            ans = min(ans, calc(l+1, x-1) + calc(x, r));
        }
    }
    dp[l][r] = ans;
    return ans;
}

int main() {
    int n;
    memset(dp, -1, sizeof dp);
    cin >> n >> s;
    long long ans = calc(0, n - 1);
    cout << ans << endl;
}