/*
 * @Author: czqsole
 * @Date: 2019-06-26 22:21
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 200010;

int cmp(int a, int b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    int q;
    cin >> q;
    while(q--) {
        cin >> n;
        vector<int> cnt(N + 5);
        for (int i = 0; i < n; ++i) {
            int t;
            cin >> t;
            cnt[t]++;
        }
        sort(cnt.begin(), cnt.begin() + N, cmp);
        int last = cnt[0];
        long long ans = last;
        for(int i = 1; i < N && cnt[i] > 0;i++) {
            if(cnt[i] < last) {
                ans += cnt[i];
                last = cnt[i];
            } else {
                ans += last - 1;
                last--;
            }
            if(last <= 0) {
                break;
            }
        }
        cout << ans << "\n";
    }
}