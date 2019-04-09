/*
 * @Author: czqsole
 * @Date: 2019-03-31 20:49
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int a[2005] = {0};
    int b[20005] = {0};
    cin >> n;
    int al = 0, bl = 0;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        if(t % 2 == 0) {
            a[al] = t;
            al++;
        } else {
            b[bl] = t;
            bl++;
        }
        sort(a, a+al);
        sort(b, b+bl);
    }
    int ans = 0;
    if(al == bl) {
        ans = 0;
    } else {
        if(al > bl) {
            for(int i = 0;i < al-bl-1;i++) {
                ans += a[i];
            }
        } else {
            for(int i = 0;i < bl-al-1;i++) {
                ans += b[i];
            }
        }
    }
    cout << ans << endl;
}