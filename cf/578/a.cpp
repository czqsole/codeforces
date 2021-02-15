/*
 * @Author: czqsole
 * @Date: 2019-09-17 02:13
 */
#include <bits/stdc++.h>
const int N = 100005;
const int M = 10;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    vector<int> a(M, 0);
    string s;
    int n;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        char c = s[i];
        if(c == 'L') {
            for(int j = 0; j < M;j++) {
                if(a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        } else if(c == 'R') {
            for (int j = M - 1; j >= 0; --j) {
                if(a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        } else {
            int room = (int)(c - '0');
            a[room] = 0;
        }
    }
    for (int i = 0; i < M; ++i) {
        cout << a[i];
    }
    cout << "\n";
}