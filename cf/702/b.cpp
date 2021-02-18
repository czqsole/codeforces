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
        int c[4]={0};
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            c[a[i]%3] ++;
        }
        int mid = n/3, move = 0;
        int last = 0;
        if(c[0] > mid) {
            last = c[0] - mid;
            move = last;
            if(c[1] > mid) {
                move  = move + last + c[1] - mid;
            } else if(c[1] < mid) {
                
            }
        }

    }
}
