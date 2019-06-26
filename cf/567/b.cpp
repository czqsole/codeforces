/*
 * @Author: czqsole
 * @Date: 2019-06-17 20:56
 */
#include <bits/stdc++.h>

using namespace std;

string s;

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

string solve(int index) {
    string a = "", b = "";
    for(int i = 0; i < index;i++) {
        a += s[i];
    }
    for(int i = index;i < s.size();i++) {
        b += s[i];
    }
//    cout << "a=" << a << ", b=" << b;
    return sum(a, b);
}

int cmp(string a, string b) {
    if(a.size() != b.size()) {
        return a.size() < b.size();
    }
    return (a < b);

}

int main() {
    int n;
    cin >> n;
    cin >> s;
    vector<string> tmp;
    int i = n / 2, num = 0;
    while (i < n && num < 3) {
        if (s[i] != '0') {
//            cout << "index: " << i << " ";
            tmp.push_back(solve(i));
            num++;
        }
        i++;
    }
    i = n / 2 - 1, num = 0;
    while (i > 0 && num < 3) {
        if (s[i] != '0') {
//            cout << "index: " << i << " ";
            tmp.push_back(solve(i));
            num++;
        }
        i--;
    }
    sort(tmp.begin(), tmp.end(), cmp);

//    for (int i = 0; i < tmp.size(); ++i) {
//        cout << tmp[i] << endl;
//    }
    cout << tmp[0] << endl;
}