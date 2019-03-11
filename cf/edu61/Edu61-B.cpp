/*
 * @Author: czqsole
 * @Date: 2019-03-05
 */
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a[300005] = {0};
    long long sum = 0;
    cin >> n;
    for(int i = 0;i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);
    cin >> m;
    for(int i = 0;i < m;i++) {
        int q;
        cin >> q;
        long long  tmp = sum - a[n - q];
        cout << tmp << endl;
    }
}