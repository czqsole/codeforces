/*
 * @Author: czq
 * @Date: 2021/2/26 6:16
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long a2max = 2*n - 1;
        int amax = (int)floor(sqrt(a2max));
        int ans = amax / 2 - 1;
        if(amax & 1) {
            ans ++;
        }
        cout << ans << endl;
    }
}