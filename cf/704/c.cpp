/*
 * @Author: czqsole
 * @Date: 2021/3/1 9:28 AM
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int m, n;
    string s, t;
    cin >> n >> m;
    cin >> s >> t;
    vector<int> left(m);
    vector<int> right(m);
    int ti = 0;
    for (int i = 0; i < n; ++i) {
        if(s[i] == t[ti]) {
            left[ti] = i;
            ti++;
        }
        if(ti >= m) {
            break;
        }
    }
    ti = m - 1;
    for (int i = n - 1; i >= 0; --i) {
        if(s[i] == t[ti]) {
            right[ti] = i;
            ti--;
        }
        if(ti < 0) {
            break;
        }
    }
    int ans = -1;
    for(int i = 1; i < m; ++i) {
        ans = max(ans, right[i] - left[i-1]);
    }
    cout << ans << endl;
}