//
// Created by czq on 2021/2/16.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long long t,n,k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        long long ans = 0;
        if(n%2) {
            long long d = (n - 1) / 2;
            k = k % (d * n);
            if(k == 0) {
                k = d * n;
            }
            if(k > d) {
                long long tmp = (k-d) %d;
                k += (k - d) / d;
                if(tmp) {
                    k++;
                }
            }
            ans = k % n;
        } else {
            ans = k % n;
        }
        if(ans == 0) {
            ans = n;
        }
        cout << ans << endl;
    }
}
