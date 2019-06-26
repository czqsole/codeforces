/*
 * @Author: czqsole
 * @Date: 2019-06-22 10:57
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 100005;

int cmp(int a, int b) {
    return a > b;
}

int main() {

    ios_base::sync_with_stdio(false);

    int n;
    vector<int> a(N);
    int min = 10000000, index = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] >= 0) {
            a[i] = -a[i] - 1;
        }
        if (a[i] < min) {
            min = a[i];
            index = i;
        }
    }
    if(n & 1) {
        a[index] = -a[index] - 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
}