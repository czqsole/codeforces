/*
 * @Author: czqsole
 * @Date: 2019-06-21 15:30
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 200005;

int main() {
    int n;
    cin >> n;
    vector<int> a(N, 0);
    vector<int> b(N, 0);
    vector<int> c(N, 0);
    vector<int> d(N, 0);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        a[i] = b[i];
    }


    int tmp = -1;
    int ans = -1;
    if(n <= 3) {
        ans = 1;
    } else {
        sort(b.begin(), b.begin() + n);
        for (int i = 0; i < n; ++i) {
            c[i] = b[i] - b[0];
        }
        for (int i = 1; i < n; ++i) {
            d[i] = b[i] - b[1];
        }
        // c1 is c
        int last = 1;
        int error = 0;
        for (int i = 2; i < n; ++i) {
            if(c[i] == (c[1] * (last + 1))) {
                last++;
            } else {
                error++;
                ans = i + 1;
                tmp = b[i];
            }
        }
        if(error == 0) {
            ans = 1;
            tmp = b[0];
        } else if(error > 1) {
            // c1 is not c
            last = 1;
            error = 0;
            for (int i = 3; i < n; ++i) {
                if(d[i] == (d[2] * (last + 1))) {
                    last++;
                } else {
                    error++;
                }
            }
            if(error == 0) {
                ans = 1;
                tmp = b[0];
            } else {
                last = 1;
                error = 0;
                for (int i = 3; i < n; ++i) {
                    if(c[i] == (c[2] * (last + 1))) {
                        last++;
                    } else {
                        error++;
                    }
                }
                if(error == 0) {
                    ans = 2;
                    tmp = b[1];
                } else {
                    ans = -1;
                }
            }
        }

    }
    if(ans > -1) {
        for (int i = 0; i < n; ++i) {
            if(tmp == a[i]) {
                ans = i + 1;
                break;
            }
        }
    }
    cout << ans << "\n";
}