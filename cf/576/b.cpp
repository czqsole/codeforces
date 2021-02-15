/*
 * @Author: czqsole
 * @Date: 2019-08-14 17:05
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long long h, l;
    double s, ans;
    cin >> h >> l;
    s = (double)(h * h + l * l) / (2 * h);
    ans = s - h;
    printf("%.13f\n", ans);
}