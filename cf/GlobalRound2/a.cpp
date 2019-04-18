/*
 * @Author: czqsole
 * @Date: 2019-04-09 13:10
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    vector<int> a(300005);
    cin >> n;
    for (int i = 0; i < n; ++i) {
//        int t;
        cin >> a[i];
    }
    int ans = -1;
    if(a[0] != a[n - 1]) {
        ans = n - 1;
    } else {
        for (int i = 1; i < n - 1; ++i) {
            if(a[0] != a[i]) {
                ans = max(ans, i);
            }
            if(a[n-1] != a[i]) {
                ans = max(ans, n - 1 - i);
            }
        }
    }
    cout << ans<< endl;
}