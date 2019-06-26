/*
 * @Author: czqsole
 * @Date: 2019-05-31 20:28
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = -1, r = m;
    while(l < r - 1) {
        int mid = (l + r) / 2;
        int check = 0;
        int pre = 0;
        for (int i = 0; i < n; ++i) {
            int li = a[i], ri = a[i] + mid;
            if((li <= pre && pre <= ri) || (li <= pre + mid && pre + mid <= ri)) {
                continue;
            }
            if(li < pre) {
                check = 1;
                break;
            } else {
                pre = li;
            }
        }

        if(check) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << r << "\n";
}