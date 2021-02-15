/*
 * @Author: czqsole
 * @Date: 2019-10-30 08:16
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 205;

int main() {
    ios_base::sync_with_stdio(false);
    int q, n;
    vector<int> p(N), t(N);
    cin >> q;
    while(q--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        t[0] = 1;
        for (int i = 1; i < n; ++i) {
            t[i] = p[t[i - 1]];
        }

    }
}