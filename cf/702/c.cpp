/*
 * @Author: czq
 * @Date: 2021/2/17 19:20
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    long long x;
    cin >> t;
    while(t--) {
        cin >> x;
        int ans = 0;
        long long maxr = 10002;
        for(long long a=1; a < maxr; a++) {
            long long r = 10001;
            long long l = 1;
            long long a3 = a * a * a;
            if(a3 > x) {
                break;
            }
            long long mid = (l + r)/2;
            while(l < r) {
                mid = (l + r) / 2;
                long long mid3 = mid * mid * mid;
                long long sum = mid3 + a3;
                if(sum > x) {
                    r = mid;
                } else if(sum < x) {
                    l = mid + 1;
                } else {
                   ans = 1;
                   break;
                }
            }
            if(ans) {
                break;
            }
        }
        if(ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}