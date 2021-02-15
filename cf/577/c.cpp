/*
 * @Author: czqsole
 * @Date: 2019-08-06 17:36
 */
#include <bits/stdc++.h>
const int N = 200005;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, k;
    vector<int> a(N, 0);
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.begin() + n);
    long long med = n / 2;
    long long now = a[med];
    for (int i = (int)med; i < n; ++i) {
        if(k <= 0) {
            break;
        }
        if(a[i] > now) {
             long long diff = a[i] - now;
             long long dis = i - med;
             // 这里容易超出int范围
             if(k >= diff * dis) {
                 now += diff;
                 k -= diff * dis;
             } else {
                 now += (k / dis);
                 k = 0;
                 break;
             }
        }
    }
    if(k > 0) {
        now += (k / (n / 2 + 1));
    }
    cout << now << endl;
}