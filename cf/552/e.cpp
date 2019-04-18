/*
 * @Author: czqsole
 * @Date: 2019-04-18 17:11
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.rbegin(), a.rend());
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        q.push(a[i].second);
    }
    set<int> idx;
    for (int i = 0; i < n; ++i) {
        idx.insert(i);
    }
    int who = 0;
    vector<int> ans(n);
    while(!idx.empty()) {
        while(!idx.count(q.front())) {
            q.pop();
        }
        int pos = q.front();
        q.pop();
        vector<int> add;
        auto it = idx.find(pos);
        for (int i = 0; i <= k; ++i) {
            add.push_back(*it);
            if(it == idx.begin()) {
                break;
            }
            it--;
        }
        it = next(idx.find(pos));
        for (int i = 0; i < k; ++i) {
            if(it == idx.end()) {
                break;
            }
            add.push_back(*it);
            it++;
        }
        for(auto it: add) {
            ans[it] = who + 1;
            idx.erase(it);
        }
        who ^= 1;
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}