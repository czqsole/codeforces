//
// Created by 晁占强 on 2021/2/1.
//

#include <bits/stdc++.h>

using namespace std;
const int N = 100005;

int main() {
    int t, n;
    long long d[N];
    long long dd[N];
    long long c[N];
    cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 0; i < 2*n; ++i) {
            cin >> d[i];
        }
        sort(d, d + 2*n);
        int ans = 1;
        for (int i = 0; i < n; ++i) {
            if(d[2*i] != d[2*i + 1]) {
                ans = 0;
                break;
            }
            dd[i] = d[2*i];
        }
        if(!ans) {
            cout << "NO\n";
        }
        for(int i=0; i < n-1;i++) {
            if((dd[i] == dd[i+1]) || (dd[i+1] - dd[i]) % (2*(i + 1))) {
                ans = 0;
                break;
            }
            c[i] = (dd[i+1] - dd[i])/2/(i + 1);
        }
        for (int i = 1; i < n; ++i) {
            dd[0] -= 2*(i+1)* c[i];
        }
        if(dd[0] <= 0 || dd[0] % (2*n)) {
            ans = 0;
        }
        if(ans) {
            cout << "YES\n;"
        } else {
            cout << "NO\n";
        }
    }
}
