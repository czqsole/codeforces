/*
 * @Author: czqsole
 * @Date: 2019-08-06 16:34
 */
#include <bits/stdc++.h>
const int N = 200005;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    vector<int> a(N, 0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.begin() + n);

    long long ans = 0;

    for (int i = 0; i < n - 1; ++i) {
        ans += a[i];
    }
//    cout << ans << endl;
    if((ans + a[n - 1])&1 || ans < a[n - 1]) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

}