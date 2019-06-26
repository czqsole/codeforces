/*
 * @Author: czqsole
 * @Date: 2019-04-22 22:58
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if(s[i] == '8') {
            cnt++;
        }
    }
    int before = 0;
    for (int i = n - 1; i >= 0; --i) {
        if(s[i] == '8') {
            break;
        }
        before++;
    }
    before = n - before - 1;
    int times = (n - 11) / 2;
    if(cnt > times && before <= times) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}