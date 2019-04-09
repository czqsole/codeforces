/*
 * @Author: czqsole
 * @Date: 2019-03-20 20:15
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    int ans = 0;

    if(m % n == 0) {
        int time = m / n;
        while (time > 0) {
//            cout << "time:" << time << endl;
            if(time % 2 == 0) {
                time /= 2;
                ans++;
            }
            if(time % 3 == 0) {
                time /= 3;
                ans++;
            }
            if((time % 2 != 0) && (time % 3 != 0)) {
                break;
            }
        }
        if(time > 1) {
            ans = -1;
        }
    } else {
        ans = -1;
    }

    cout << ans << endl;
}