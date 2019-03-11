/*
 * @Author: czqsole
 * @Date: 2019-03-12 00:12
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;

    cin >> n >> k;
    int v = min(k-1, n-k);
    int ans = 3 + v + 3 * (n - 1);
    cout << ans << endl;
}