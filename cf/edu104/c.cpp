/*
 * @Author: czq
 * @Date: 2021/2/26 5:26
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t, n;
    cin >> t;
    int a[105];
    while(t--) {
        cin >> n;
        if(n & 1) {
            int n2 = (n - 1) / 2;
            for (int i = 0; i < n2; ++i) {
                a[i] = 1;
                a[i+n2] = -1;
            }
            for (int i = n-2; i > 0; --i) {
                for (int j = 0; j <= i; ++j) {
                    cout << a[j] << " ";
                }
//                cout << endl;
            }
            cout << "1\n";
        } else {
            int n2 = n / 2 - 1;
            for (int i = 0; i < n2; ++i) {
                a[i] = 1;
                a[i+n2+1] = -1;
            }
            a[n2] = 0;
            for (int i = n-2; i >= 0; --i) {
                for (int j = 0; j <= i; ++j) {
                    cout << a[j] << " ";
                }
//                cout << endl;
            }
            cout << "\n";

        }
    }
}