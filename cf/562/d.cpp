/*
 * @Author: czqsole
 * @Date: 2019-06-03 15:25
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int n;
    cin >> s;
    n = s.length();

    vector<int> val(n);
    vector<int> num(n + 1);

    num[n] = n;
    for(int i = n - 1 ;i >= 0;i--) {
        num[i] = num[i + 1];
        for(int k = 1;i + 2 * k < num[i];k++) {
            if(s[i] == s[i + k] && s[i + k] == s[i + 2 * k]) {
                num[i] = i + 2 * k;
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += n - num[i];
    }
    cout << ans << endl;
    
}