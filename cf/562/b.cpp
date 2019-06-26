/*
 * @Author: czqsole
 * @Date: 2019-05-28 02:08
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);

    for (int i = 0; i < m; ++i) {
        int t1, t2;
        cin >> t1 >> t2;
        a[i] = t1 - 1;
        b[i] = t2 - 1;
    }
    int x = a[0], y = b[0];
    int cnt1 = 0, cnt2 = 0;
    vector<int> xx(n), yy(n);
    for (int i = 0; i < m; ++i) {
        int c1 = 0, c2 = 0;
        if(a[i] != x && b[i] != x) {
            xx[a[i]]++;
            xx[b[i]]++;
            cnt1++;
        }
        if(a[i] != y && b[i] != y) {
            yy[a[i]]++;
            yy[b[i]]++;
            cnt2++;
        }
    }
    int ans = 0;
    for(int i = 0; i < n;i++) {
        if(xx[i] == cnt1) {
            ans = 1;
            break;
        }
        if(yy[i] == cnt2) {
            ans = 1;
            break;
        }
    }
    if(!ans) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}