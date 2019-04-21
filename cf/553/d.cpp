/*
 * @Author: czqsole
 * @Date: 2019-04-19 11:59
 */
#include <bits/stdc++.h>

using namespace std;

int cmp(pair<long long, long long> a, pair<long long, long long> b) {
    return a.second - a.first < b.second - b.first;
}

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> st(n);
    for (int i = 0; i < n; ++i) {
        cin >> st[i].first >> st[i].second;
    }
    sort(st.begin(), st.end(), cmp);
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += st[i].first * (i - 0) + st[i].second * (n - 1 - i);
    }
    cout << ans << endl;
}