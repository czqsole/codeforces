/*
 * @Author: czqsole
 * @Date: 2019-08-07 18:08
 */
#include <bits/stdc++.h>
const int N = 100005;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
     int n, x, y;
     vector<int> a(N, 0);
     cin >> n >> x >> y;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        bool ok = true;
        int j = max(0, i - x);
        for(; j < i;j++) {
            if(a[j] <= a[i]) {
                ok = false;
                break;
            }
        }
        j = min(n - 1, i + y);
        for(;j > i;j--) {
            if(a[j] <= a[i]) {
                ok = false;
                break;
            }
        }
        if(ok) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << "\n";
}