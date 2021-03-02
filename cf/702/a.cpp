/*
 * @Author: czqsole
 * @Date: 2021/2/16 11:42 PM
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t, n;
    vector<int> a(55);
    cin >> t;
    while(t--) {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        for(int i = 0;i < n - 1;i++) {
            int _min = min(a[i], a[i+1]);
            int _max = max(a[i], a[i+1]);
            if(2 * _min < _max) {
                int tmp = _min;
                while(2 * tmp < _max) {
                    ans ++;
                    tmp = 2 * tmp;
                }
            }
        }
        cout << ans << endl;
    }
}