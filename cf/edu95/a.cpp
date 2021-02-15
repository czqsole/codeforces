/*
 * @Author: czqsole
 * @Date: 2020/9/18 5:49 AM
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long long t, x, y, k;
    cin >> t;
    while(t--) {
        cin >> x >> y >> k;
        long long ans = k;
        long long t1 = 0;
        t1 = k * y / (x - 1);
        long long last = (k * y) % (x - 1);
        if(last > 0) {
            t1 ++;
            last = t1 * (x - 1) - k * y;
        }
        ans += t1;
//        cout << "last: " << last << endl;
        if(last + 1 < k) {
            ans += (k - last - 1) / (x - 1);
            last = (k - last - 1) % (x - 1);
            if(last > 0) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}