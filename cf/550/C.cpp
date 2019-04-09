/*
 * @Author: czqsole
 * @Date: 2019-03-31 20:50
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, l1 = 0,l2 = 0;
    int a[200005] = {0};
    int b[200005] = {0};
    int c[200005] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);
    b[0] = a[0];
    l1++;
    bool  flag = true;
    for (int i = 1; i < n; ++i) {
        if(a[i] > b[l1-1]) {
            b[l1] = a[i];
            l1++;
        } else {
            if(l2 == 0) {
                c[l2] = a[i];
                l2++;
            } else {
                if(a[i] > c[l2 - 1]) {
                    c[l2] = a[i];
                    l2++;
                } else {
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag) {
        cout << "YES" << endl;
        cout << l1 << endl;
        if(l1 > 0) {
            for (int i = 0; i < l1 - 1; ++i) {
                cout << b[i] << " ";
            }
            cout << b[l1-1] << endl;
        } else {
            cout << endl;
        }
        cout << l2 << endl;
        if(l2 > 0) {
            for (int i = l2 - 1; i > 0; --i) {
                cout << c[i] << " ";
            }
            cout << c[0] << endl;
        } else {
            cout << endl;
        }

    } else {

        cout << "NO" << endl;
    }
}