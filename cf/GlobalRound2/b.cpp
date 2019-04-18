/*
 * @Author: czqsole
 * @Date: 2019-04-09 13:11
 */
#include <bits/stdc++.h>

using namespace std;

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, h;
    vector<int> a(1005);
    cin >> n >> h;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int k = 1;
    for(; k <= n; k++) {
        sort(a.begin(), a.begin() + k, cmp);
        int tmp = 0;
        for(int i = 0;i < k;i+=2) {
            tmp += a[i];
        }
        if(tmp > h) {
            break;
        }

    }
    cout << k - 1 << endl;
}