//
// Created by czq on 2021/2/17.
//
#include <bits/stdc++.h>

using namespace std;

int MAXN = 30005;

int main() {
    ios_base::sync_with_stdio(false);
    int a[MAXN];
    int t;
    int n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> c(3);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            c[a[i]%3] ++;
        }
        int mid = n/3, move = 0;
        while(*min_element(c.begin(), c.end()) != mid) {
            for (int i = 0; i < 3; ++i) {
                if(c[i] > mid) {
                    move++;
                    c[i]--;
                    c[(i+1) % 3]++;
                }
            }
        }
        cout << move << endl;
    }
}
