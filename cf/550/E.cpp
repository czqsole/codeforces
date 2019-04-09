/*
 * @Author: czqsole
 * @Date: 2019-03-31 20:51
 */
#include <bits/stdc++.h>

using namespace std;



int main() {
    int k;
    string s;
    string t;
    cin >> k >> s >> t;
    vector<int> ans(k + 1, 0);
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    for (int i = 0; i < k; ++i) {
        ans[i] += s[i] - 'a' + t[i] - 'a';
        if(ans[i] >= 26) {
            ans[i] = ans[i] - 26;
            ans[i + 1] = 1;

        }
    }
    if(ans.back()) {
        reverse(ans.begin(), ans.end());
        ans[1] += 26;
        ans.erase(ans.begin());
    } else {
        reverse(ans.begin(), ans.end() - 1);
        ans.pop_back();
    }
    for(int i=0;i<ans.size();i++) {
        if(ans[i] % 2 == 1) {
            ans[i + 1] += 26;
        }
        ans[i] /= 2;
    }
    for (int i = 0; i < ans.size(); ++i) {
        cout << (char)(ans[i] + 'a');
    }
    cout << endl;
}