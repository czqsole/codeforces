/*
 * @Author: czqsole
 * @Date: 2021/2/18 6:05 PM
 */
#include <bits/stdc++.h>

using namespace std;
int MAXN = 105;

int main() {
    ios_base::sync_with_stdio(false);
    int t, n, a[MAXN];
    int d[MAXN];
    cin >> t;
    while(t--) {
        cin >> n;
        int maxn = -1;
        int max_index = -1;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] > maxn) {
                maxn = a[i];
                max_index = i;
            }
        }
        int left_num[MAXN];
        int right_num[MAXN];
        for (int i = 0; i <= max_index; ++i) {
            left_num[i] = a[i];
        }
        for (int i = max_index; i < n; ++i) {
            right_num[i-max_index] = a[i];
        }
        sort(left_num, left_num + max_index, greater<int>());
        sort(right_num, right_num + n - 1 - max_index, greater<int>());
        for(int i = 0; i <= max_index; i++) {
            if(a[i] == maxn) {
                d[i] = 0;
                continue;
            }
            for (int j = 0; j <= max_index; ++j) {
                if(left_num[j] == a[i]) {
                    d[i] = j / 2 + 1;
                    break;
                }
            }
        }

        for (int i = max_index + 1; i < n; ++i) {
            for (int j = 0; j < n - 1 - max_index; ++j) {
                if(right_num[j] == a[i]) {
                    d[i] = j / 2 + 1;
                }
            }
        }
        for (int i = 0; i < n - 1; ++i) {
            cout << d[i] << " ";
        }
        cout << a[n-1] << endl;
    }
}