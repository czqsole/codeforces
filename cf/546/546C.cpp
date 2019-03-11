/*
 * @Author: czqsole
 * @Date: 2019-03-12 00:12
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    int a[505][505] = {0}, b[505][505] = {0};
    int l[250005] = {0};
    int r[250005] = {0};
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> b[i][j];
        }
    }


    string ans = "YES";
    bool flag = true;
    if(n < m) {
        for(int i=1;i<=n && flag;i++) {
            int len = 0;
            for(;i-len >= 1 && len+1 <= m;len++) {
                l[len] = a[1+len][i-len];
                r[len] = b[1+len][i-len];
            }
            sort(l, l+len);
            sort(r, r+len);
            for(int j=0;j<len;j++) {
                if(l[j] != r[j]) {
                    ans = "NO";
                    flag = false;
                    break;
                }
            }
        }

        for(int i=m;i>=1 && flag;i--) {
            int len = 0;
            for(;i+len <= m && n-len >= 0;len++) {
                l[len] = a[n-len][i+len];
                r[len] = b[n-len][i+len];
            }
            sort(l, l+len);
            sort(r, r+len);
            for(int j=0;j<len;j++) {
                if(l[j] != r[j]) {
                    ans = "NO";
                    flag = false;
                    break;
                }
            }
        }

    } else {
        for(int i=1;i<=m && flag;i++) {
            int len = 0;
            for(;i-len >= 1 && len+1 <= n;len++) {
                l[len] = a[i-len][1+len];
                r[len] = b[i-len][1+len];
            }
            sort(l, l+len);
            sort(r, r+len);
            for(int j=0;j<len;j++) {
                if(l[j] != r[j]) {
                    ans = "NO";
                    flag = false;
                    break;
                }
            }
        }

        for(int i=n;i>=1 && flag;i--) {
            int len = 0;
            for(;i+len <= n && m-len >= 0;len++) {
                l[len] = a[i+len][m-len];
                r[len] = b[i+len][m-len];
            }
            sort(l, l+len);
            sort(r, r+len);
            for(int j=0;j<len;j++) {
                if(l[j] != r[j]) {
                    ans = "NO";
                    flag = false;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}