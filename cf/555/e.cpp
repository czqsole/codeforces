/*
 * @Author: czqsole
 * @Date: 2019-04-29 16:41
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    multiset<int> b;
//    vector<int> d(n);
    vector<int> ans(n);
    vector<pair<int, int>> num(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] %= n;
    }
    for (int j = 0; j < n; ++j) {
        int x;
        cin >> x;
        b.insert(x);
    }

    for (int i = 0; i < n; ++i) {
        int tmp = n - a[i];
        auto it = b.lower_bound(tmp);
        if(it == b.end()) it = b.begin();
        ans[i] = (a[i] + *it) % n;
        b.erase(it);

    }
    for (int i = 0; i < n; ++i) {
        if(i != n - 1) {
            cout << ans[i] << " ";
        } else {
            cout << ans[i] << endl;
        }
    }
}