/*
 * @Author: czqsole
 * @Date: 2019-04-18 10:53
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n;
    int s[200005];
    cin >> n >> b >> a;
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }
    int a_max = a;
    int i = 1;
    bool ok = true;
    for(;i <= n;i++) {
        if(s[i] == 1) {
            if(a == a_max) {
                a--;
            } else {
                if(b > 0) {
                    b--;
                    a = min(a + 1, a_max);
                } else if(a > 0) {
                    a--;
                } else {
                    break;
                }
            }
        } else {
            if(a > 0) {
                a--;
            } else if(b > 0) {
                b--;
            } else {
                break;
            }
        }
    }
    if(i > n) {
        i = n;
    } else {
        i--;
    }
    cout << i << endl;
}