/*
 * @Author: czqsole
 * @Date: 2021/3/2 2:18 AM
 */
#include <bits/stdc++.h>

using namespace std;
int N = 100005;

int main() {
    ios_base::sync_with_stdio(false);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> p(N);
        vector<int> pos(N);
        vector<int> vis(N);
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
            pos[p[i]] = i;
            vis[i] = 0;
        }
        for(int i = n;i >= 1;i--) {
            if(vis[pos[i]]) {
                continue;
            }
            for(int j = pos[i]; j <= n && vis[j] == 0;j++) {
                cout << p[j] << " ";
                vis[j] = 1;
            }
        }
        cout << "\n";
    }
}