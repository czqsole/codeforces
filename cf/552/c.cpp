/*
 * @Author: czqsole
 * @Date: 2019-04-18 10:53
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int aa[8] = {1, 2, 3, 1, 3, 2, 1, 1};
    int a, b, c;
    cin >> a >> b >> c;

    int an = 3, bn = 2, cn = 2;
    int max_week = a / an;
    max_week = min(max_week, b / bn);
    max_week = min(max_week, c / cn);
    int max_days = -1;
    for(int i = 0; i < 7; i++) {
        int a_last = a - an * max_week;
        int b_last = b - bn * max_week;
        int c_last = c - cn * max_week;
        int tmp = max_week * 7;
        for(int j = 0;j < 7;j++) {
            int day = (j + i) % 7;
            if(aa[day] == 1) {
                if(a_last > 0) {
                    a_last--;
                } else {
                    break;
                }
            }
            if(aa[day] == 2) {
                if(b_last > 0) {
                    b_last--;
                } else {
                    break;
                }
            }
            if(aa[day] == 3) {
                if(c_last > 0) {
                    c_last--;
                } else {
                    break;
                }
            }
            tmp++;
        }
        max_days = max(max_days, tmp);
    }
    cout << max_days << endl;
}