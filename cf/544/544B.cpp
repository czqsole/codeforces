/*
 * @Author: czqsole
 * @Date: 2019-03-07
 */
//#include <iostream>
//#include <cmath>
//#include <map>
//#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    int d[10005];
    cin >> n >> k;
    vector<int> cnt(k);
    for( int i = 0; i < n;i ++) {
        int t;
        cin >> t;
        cnt[t % k]++;
    }
    long ans = 0;
    ans += cnt[0] / 2;
    int end;
    if(k % 2 == 0) {
        ans += cnt[k / 2] / 2;
        end = k / 2 - 1;
    } else {
        end = k / 2;
    }
    for(int i = 1; i <= end; ++i) {
        ans += min(cnt[i], cnt[k - i]);
    }
    cout << ans * 2 << endl;
}