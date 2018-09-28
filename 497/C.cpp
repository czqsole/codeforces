/*
 * @Author: czqsole
 * @Date: 2018/7/13
 */
#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int main() {
    int n;
    int a[100005] = {};
    map<int, int> num;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        num[a[i]] = num[a[i]] + 1;
    }
    sort(a, a+n);
    int ans=0;
    for(int i=0;i<n;i++) {
        int j=i;
        for(j=i;j<n;j++) {
            if(a[j] != a[i]) {
                break;
            }
        }
        int tmp  = max(0, i-ans);
        ans += min(tmp, num[a[i]]);
        i=j-1;
    }
    cout << ans << endl;
}