/*
 * @Author: czqsole
 * @Date: 2019-06-24 16:22
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, ans;
    cin >> n;
    if(n == 1) {
        ans = 1;
    } else {
        ans = n * n + (n -1) * (n - 1);
    }
    cout << ans << endl;
}