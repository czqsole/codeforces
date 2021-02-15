/*
 * @Author: czqsole
 * @Date: 2019-08-06 16:15
 */
#include <bits/stdc++.h>
const int N = 1005;
const int OPT = 5;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    vector<vector<int>> cnt(N, vector<int>(10, 0));
    vector<int> point(N, 0);
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); ++j) {
            int index = (int)(s[j] - 'A');
            cnt[j][index]++;
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> point[i];
    }
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        int maxx = -1;
        for (int j = 0; j < OPT; ++j) {
            if(cnt[i][j] > maxx) {
                maxx = cnt[i][j];
            }
        }
//        cout << maxx << " " << point[i] << endl;
        ans += maxx * point[i];
    }
    cout << ans << endl;
}