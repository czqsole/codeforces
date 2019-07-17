/*
 * @Author: czqsole
 * @Date: 2019-06-26 22:21
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, k;
    int q;
    vector<int> a(105);
    cin >> q;
    while(q--) {
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.begin() + n);
        int ans = -1;
        for(int i=n-1;i >= 0;i--) {
            for(int t = -1; t <= 1;t++) {
                int maxb = max(a[i] + k * t, 1);
                bool flag = true;
                for(int j=0;j < n;j++) {
                    bool  flag2 = false;
                    for(int tt = -1; tt <= 1;tt++) {
                        int tmp = a[j];
                        if(abs(tmp - maxb) <= k) {
                            flag2 = true;
                            break;
                        }
                    }
                    if(!flag2) {
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    ans = max(ans, maxb);
                }
            }
        }
        cout << ans << "\n";
    }
}