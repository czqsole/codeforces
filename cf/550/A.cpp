/*
 * @Author: czqsole
 * @Date: 2019-03-31 20:49
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int a[1005];

    cin >> n;

    for ( int i = 0;i < n;i++) {
        string s;
        cin >> s;
        for(int j=0;j < s.length();j++) {
            a[j] = s[j] - 'a';
        }
        sort(a, a + s.length());
        int ans = 1;
        for(int j=0;j < s.length()-1;j++) {
            if(a[j+1] != a[j] + 1) {
                ans = 0;
                break;
            }
        }
        if(ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}