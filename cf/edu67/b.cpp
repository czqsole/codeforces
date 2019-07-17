/*
 * @Author: czqsole
 * @Date: 2019-07-05 19:02
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 200005;

/**
 * binary search
 * time complex: O(m*n*log(n))
 */

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    string s, t;
    cin >> n;
    cin >> s;
    cin >> m ;
    vector<vector<int>> cnt(N, vector<int>(30, 0));
    vector<int> last(30, 0);

    for (int i = 0; i < n; ++i) {
        int index = (int)(s[i] - 'a');
//        cnt[i][index] = last[index] + 1;
        last[index]++;
        for(int j = 0;j < 30;j++) {
            cnt[i][j] = last[j];
        }
    }

    for (int i = 0; i < m; ++i) {
        cin >> t;
        int tl = (int)t.size();
        vector<int> need(30, 0);
        for(int j = 0;j < tl;j++) {
            int index = (int)(t[j] - 'a');
            need[index]++;
        }
        int ans = -1;
//        for(int j = tl - 1;j < n;j++) {
//            bool ok = true;
//            for(int k = 0;k < 26;k++) {
//                if(cnt[j][k] < need[k]) {
//                    ok = false;
//                    break;
//                }
//            }
//            if(ok) {
//                ans = j + 1;
//                break;
//            }
//
//        }
        int left = 0, right = n - 1;
        while(left < right) {
            int mid = left + ((right - left) >> 1);
//            cout << "---------" << left << " " << right << mid << "\n";
            bool ok = true;
            for(int k = 0;k < 26;k++) {
                if(cnt[mid][k] < need[k]) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        ans = left + 1;
        cout << ans << "\n";
    }
}