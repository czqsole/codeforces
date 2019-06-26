/*
 * @Author: czqsole
 * @Date: 2019-06-25 15:19
 */
#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m) {
    for (int x = 0; x < n / 2; ++x ) {
        for (int y = 0; y < m; ++y) {
            cout << x + 1 << " " << y + 1 << "\n";
            cout << n - x << " " << m - y << "\n";
        }
    }
    if(n % 2) {
        int x = n / 2 + 1;
        for (int y = 0; y < m / 2; ++y) {
            cout << x << " " << y + 1 << "\n";
            cout << x << " " << m - y << "\n";
        }
        if(m % 2) {
            cout << n / 2 + 1 << " " << m / 2 + 1 << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    solve(n, m);
}