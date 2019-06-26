/*
 * @Author: czqsole
 * @Date: 2019-06-21 14:44
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 200005;

int main() {
    int n, m;
    vector<int> t(N, 0);
    vector<int> sum(N, 0);
    vector<int> ans(N, 0);
    vector<int> count(105, 0);
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
        sum[i + 1] = sum[i] + t[i];
    }


    for (int i = 0; i < n; ++i) {
        int s = sum[i];
        for(int j = 100; j >= 1; j--) {
            if(s + t[i] <= m) {
                break;
            }
            if(s + t[i] - count[j] * j > m) {
                ans[i] += count[j];
                s -= count[j] * j;
            } else {
                int tmp = (s + t[i] - m) / j;
                if((s + t[i] - m) % j > 0) {
                    tmp ++;
                }
                ans[i] += tmp;
                break;
            }
        }
        count[t[i]]++;
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}