/*
 * @Author: czq
 * @Date: 2021/2/18 23:53
*/
#include <bits/stdc++.h>

using namespace std;
int MAXN = 1005;

int main() {
    ios_base::sync_with_stdio(false);
    int tt, n;
    int x[MAXN],y[MAXN];
    cin >> tt;
    while(tt--) {
//        cout << "t1=" << tt << endl;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x[i] >> y[i];
        }
        sort(x, x + n);
        sort(y, y + n);
        long long ans = 0L;
        if(n & 1) {
            ans = 1LL;
        } else {
            ans = 1ll * (x[n/2] - x[n/2-1] + 1) * (y[n/2] - y[n/2-1] + 1);
        }
        cout << ans << endl;
    }

}