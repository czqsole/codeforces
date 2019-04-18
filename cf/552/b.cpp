/*
 * @Author: czqsole
 * @Date: 2019-04-18 10:53
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[105], n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    bool flag = true;
    int d = 0;
    for (; d <= 100 && flag; ++d) {
//        cout << "d:" << d << endl;
        for (int i = -1; i <= 1 && flag; ++i) {
            int tmp = a[0] + d * i;
            bool s = true;
            for (int j = 1; j < n; ++j) {
                if(a[j] == tmp || (a[j] + d == tmp) || (a[j] - d == tmp)) {
                    continue;
                }
                s = false;
                break;
            }
            if(s) {
                flag = false;
            }

        }
    }
    if(flag) {
        cout << "-1" << endl;
    } else {
        cout << d - 1 << endl;
    }
}