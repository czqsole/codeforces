/*
 * @Author: czqsole
 * @Date: 2019-06-18 17:20
 */
#include <bits/stdc++.h>

using namespace std;

string sum(string a, string b) {
    vector<int> ans(max(a.size(), b.size()) + 1, 0);
    int len = 0;
    for(int i = a.size() - 1;i >= 0;i--) {
        ans[len] += a[i] - '0';
        len++;
    }
    len = 0;
    for(int i = b.size() - 1;i >=0;i--) {
        ans[len] += b[i] - '0';
        len++;
    }

    int y = 0;
    for (int i = 0;i < ans.size(); i++) {
        int x = (y + ans[i]) % 10;
        y = (y + ans[i]) / 10;
        ans[i] = x;
    }
    while(ans.back() == 0) {
        ans.pop_back();
    }
    string anss = "";
    while(!ans.empty()) {
        anss += (char)(ans.back() + '0');
        ans.pop_back();
    }
//    cout << ", ans=" << anss << endl;
    return anss;
}

int main() {

}