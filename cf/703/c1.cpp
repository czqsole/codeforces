/*
 * @Author: czq
 * @Date: 2021/2/19 21:18
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int l = 1, r = n;
    int _index = 1;
    while(l < r) {
        cout << "? " << l << " " << r << endl;
        cout.flush();
        cin >> _index;

    }
}