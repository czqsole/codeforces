/*
 * @Author: czqsole
 * @Date: 2019-04-19 11:59
 */
#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[505][505] = {0};
int ans[505];

int dfs(int i, int now) {
    if(i >= n) {
        return now;
    }
    for (int j = 0; j < m; ++j) {
        now = a[i][j] xor now;
        ans[i] = j + 1;
        if(i == n-1 && now > 0) {
            return now;
        }
        dfs(i + 1, now);
    }
    return now;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for(int i=0;i<n;i++) {
        res ^= a[i][0];
        ans[i] = 1;
    }
    bool flag = true;
    if(res == 0) {
        flag = false;
        for (int i = 0; i < n && !flag; ++i) {
            for (int j = 1; j < m; ++j) {
                if(a[i][j] != a[i][0]) {
                    ans[i] = j + 1;
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag) {
        cout << "TAK" << endl;
        bool first = true;
        cout << ans[0];
        for (int i = 1; i < n; ++i) {
            cout << " " << ans[i];
        }
        cout << endl;
    } else {
        cout << "NIE" << endl;
    }
}