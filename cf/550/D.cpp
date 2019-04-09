/*
 * @Author: czqsole
 * @Date: 2019-03-31 20:50
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int a[200005] = {0};
    int b[200005] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int t = 0;
    int maxn = -1;
    int first = 0;
    for(int i = 0;i < n; i++){
        int j = i;
        while(j < n && a[j] == a[i]) j++;
        int tmp = j - i;
        if(tmp > maxn) {
            maxn = tmp;
            t = a[i];
        }
        i = j-1;
    }
    for (int i = 0; i < n; ++i) {
        if(b[i] == t) {
            first = i;
            break;
        }
    }
    int cnt = n - maxn;
    cout << cnt << endl;
    for (int i = first - 1; i >= 0 ; --i) {
        if(b[i] < t) {
            cout << 1 << " " << i+1 << " " << i + 2 << endl;
            b[i] = b[i] + abs(b[i] - b[i+1]);
        } else {
            cout << 2 << " " << i+1 << " " << i + 2 << endl;
            b[i] = b[i] - abs(b[i] - b[i+1]);
        }
    }
    for (int i = first + 1; i < n; ++i) {
        if(b[i] == t) {
            continue;
        } else {
            if(b[i] < t) {
                cout << 1 << " " << i+1 << " " << i << endl;
                b[i] = b[i] + abs(b[i] - b[i - 1]);
            } else {
                cout << 2 << " " << i+1 << " " << i << endl;
                b[i] = b[i] - abs(b[i] - b[i - 1]);
            }
        }
    }

//    for (int i = 0; i < n; ++i) {
//        cout << b[i] << " " << endl;
//    }
}