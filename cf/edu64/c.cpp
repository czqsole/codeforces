/*
 * @Author: czqsole
 * @Date: 2019-05-07 12:40
 */
#include <bits/stdc++.h>

using namespace std;

const int N = 400005;
bool isPrime[N + 10];
int prim[100000];
int prime() {
    int num = 0;
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) prim[num++] = i;
        for (int j = 0; j < num; j++) {
            if (i * prim[j] > N) break;
            isPrime[i * prim[j]] = false;
            if (i % prim[j] == 0) break;
        }
    }
    return num;
}

int main() {
    int n;
    int c1 = 0, c2 = 0;
    cin >> n;
    int ans[200005] = {0};
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        if(t == 1) {
            c1 ++;
        } else {
            c2 ++;
        }
    }
    int pNum = prime();
    int an = 0;
    for (int i = 0; i < pNum && (c1 > 0 || c2 > 0); ++i) {
        int sum = 0;
        if(i == 0) {
            sum = prim[0];
        } else {
            sum = prim[i] - prim[i - 1];
        }
        int need2 = sum / 2;

        if(c2 < need2) {
            need2 = c2;
        }
        sum = sum - need2 * 2;
        if(sum > c1) {
            sum = c1;
        }
        for (int j = 0; j < need2 && an < n; ++j) {
            ans[an++] = 2;
            c2--;
        }
        for (int j = 0; j < sum && an < n; ++j) {
            ans[an++] = 1;
            c1--;
        }
    }
    bool first = true;
    for (int i = 0; i < an; ++i) {
        if(!first) {
            cout << " " << ans[i];
        } else {
            cout << ans[i];
            first = false;
        }
    }
    while(c2 > 0) {
        if(!first) {
            cout << " 2";
        } else {
            cout << "2";
            first = false;
        }
        c2--;
    }
    while(c1 > 0) {
        if(!first) {
            cout << " 1";
        } else {
            cout << "1";
            first = false;
        }
        c1--;
    }
    cout << endl;
}