/*
 * @Author: czqsole
 * @Date: 2019-04-19 11:58
 */
#include <bits/stdc++.h>

using namespace std;

int op(int a, int b) {
    if(a > b) {
       int t = b;
       b = a;
       a = t;
    }
    int t1 = b - a;
    int t2 = a + 26 - b;
    return min(t1, t2);
}

int main() {
    int n;
    int s[55];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        s[i] = c - 'A';
    }
    int a = 'A' - 'A';
    int c = 'C' - 'A';
    int t = 'T' - 'A';
    int g = 'G' - 'A';
    int ans = 100;
    for(int i = 0;i < n - 3; i++) {
        int tmp = 0;
        tmp  = op(s[i], a) + op(s[i + 1], c) + op(s[i + 2], t) + op(s[i + 3], g);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}