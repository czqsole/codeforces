/*
 * @Author: czqsole
 * @Date: 2019-06-14 12:25
 */
#include <bits/stdc++.h>

using namespace std;

int index(int a) {
    if(a == 4) {
        return 0;
    }
    if(a == 8) {
        return 1;
    }
    if(a == 15) {
        return 2;
    }
    if(a == 16) {
        return 3;
    }
    if(a == 23) {
        return 4;
    }
    if(a == 42) {
        return 5;
    }
}

int main() {
    int n;
    int num[10] = {0};
    int a[500005], b[500005] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
//        int t;
//        cin >> t;
//        num[index(t)]++;
        cin >> a[i];
    }
    for(int i=0; i < n; i++) {
        if(a[i] == 4) {
            num[0]++;
        }
        if(a[i] == 8) {
            if(num[0] > num[1]) {
                num[1]++;
            }
        }
        if(a[i] == 15) {
            if(num[1] > num[2]) {
                num[2]++;
            }
        }
        if(a[i] == 16) {
            if(num[2] > num[3]) {
                num[3]++;
            }
        }
        if(a[i] == 23) {
            if(num[3] > num[4]) {
                num[4]++;
            }
        }
        if(a[i] == 42) {
            if(num[4] > num[5]) {
                num[5]++;
            }
        }
    }
    cout << n - num[5] * 6 << endl;
}