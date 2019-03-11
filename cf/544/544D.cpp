/*
 * @Author: czqsole
 * @Date: 2019-03-08
 */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>

const int N = 200000 + 5;
using namespace std;

int my_gcd(int x, int y) {
    return  y ? my_gcd(y, x % y) : x;

}

void simple(pair<int, int>& p) {
    if(p.first < 0){
        p.first *= -1;
        p.second *= -1;
    } else if(p.first == 0) {
        p.second *= -1;
    }
    int d = my_gcd(p.first, p.second);
    p.first /= d;
    p.second /= d;
}

int main() {
    int a[N] = {0};
    int b[N] = {0};
    int n;
    int num0 = 0;
    map<pair<int, int>, int> cnt;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++) {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 0;i < n; ++i) {
        if(a[i] == 0) {
            if(b[i] == 0) {
                num0++;
            }
        } else {
            pair<int, int> p = make_pair(-b[i], a[i]);
            simple(p);
            cnt[p]++;
            ans = max(ans, cnt[p]);
        }
    }
    ans += num0;
    cout << ans << endl;
}