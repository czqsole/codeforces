/*
 * @Author: czqsole
 * @Date: 2019-04-22 22:45
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int max = -100;
    int pos = -1;
    bool ok = false;
    for (int i = 0; i < n; ++i) {
        int t = s[i] - 'a';
        if(t >= max) {
            max = t;
            pos = i;
        } else {
            cout << "YES" << endl;
            cout << pos + 1 << " " << i + 1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}