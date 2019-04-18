/*
 * @Author: czqsole
 * @Date: 2019-04-18 10:52
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[5] = {0};
    int _max = -1;
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
        _max = max(a[i], _max);
    }
    bool first = true;
    for (int j = 0; j < 4; ++j) {
        if(a[j] == _max) {
            continue;
        }
        if(first) {
            first = false;
            cout << _max - a[j];
        } else {
            cout << " " << _max - a[j];
        }
    }
    cout << endl;

}