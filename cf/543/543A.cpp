/*
 * @Author: czqsole
 * @Date: 2019-03-05
 */
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a[100005] = {0};
    int num[200005] = {0};
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        num[a[i]]++;
    }
    sort(a, a + n);
    int ans = -1;
    for(int sum = 2;sum <= 200000; sum++) {
        int half = sum / 2;
        int tmp = 0;
        for(int i=0;i<n;i++) {
            if(2 * a[i] > sum) {
                break;
            }
            if(2 * a[i] == sum) {
                tmp += (num[a[i]] / 2);
//                cout << "sum:" << sum << "= " << a[i] << + " + " << a[i] << endl;
                break;
            } else {
//                cout << "sum:" << sum << "= " << a[i] << + " + " << sum - a[i] << endl;
                tmp += min(num[a[i]], num[sum - a[i]]);
            }
        }
        if(tmp > ans) {
//            cout << "sum:" << sum << ", tmp:" << tmp <<endl;
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}