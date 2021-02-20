/*
 * @Author: czq
 * @Date: 2021/2/18 23:32
*/
#include <bits/stdc++.h>

using namespace std;
int MAXN = 105;

int main() {
    ios_base::sync_with_stdio(false);
    int t, n;
    long long h[MAXN];
    cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        long long sum0 = 0;
        long long sum1 = 0;
        int ans = 1;
        for(int i = 0;i < n;i++) {
            sum1 += h[i];
            sum0 += i;
            if(sum1 < sum0) {
                ans = 0;
                break;
            }
        }
        if(ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}