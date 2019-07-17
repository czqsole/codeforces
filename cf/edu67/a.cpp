/*
 * @Author: czqsole
 * @Date: 2019-07-05 18:38
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--) {
        int n;
        int s, t;
        cin >> n >> s >> t;
        int st = (s + t) - n;
        int ans = max(s, t) - st + 1;
        cout << ans << "\n";
    }
}