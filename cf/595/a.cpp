/*
 * @Author: czqsole
 * @Date: 2019-10-30 08:05
 */
#include <bits/stdc++.h>
const int N = 105;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int q, n;
    vector<int> a(N);
    cin >> q;
    while(q--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.begin() + n);
        int ans = 1;
        for (int i = 1; i < n; ++i) {
            if((a[i] - a[i-1]) == 1) {
                ans++;
                break;
            }
        }
        cout << ans << endl;
    }
}