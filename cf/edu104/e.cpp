/*
 * @Author: czqsole
 * @Date: 2021/2/28 6:07 AM
 */
#include <bits/stdc++.h>

using namespace std;
int NIF = 4e8 + 100;

int main() {
    ios_base::sync_with_stdio(false);
    vector<int> n_num(4);
    vector<vector<int>> course(4);

    for (int i = 0; i < 4; ++i) {
        cin >> n_num[i];
    }
    for (int i = 0; i < 4; ++i) {
        course[i].resize(n_num[i]);
        for (int j = 0; j < n_num[i]; ++j) {
            cin >> course[i][j];
        }
    }
    vector<vector<vector<int>>> cant(4);
    cant[0].clear();
    for(int i = 1;i < 4;i++) {
        cant[i].resize(n_num[i]);
        int m;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            int x, y;
            cin >> x >> y;
            cant[i][y - 1].push_back(x - 1);
        }
    }

    //dp[i][j]
    vector<vector<int>> dp(4);
    dp[0] = course[0];
    // 遍历不搭配的菜品组合
    for(int i = 1;i < 4;i++) {
        dp[i].resize(n_num[i]);
        multiset<int> pre_course;
        for (int j = 0; j < n_num[i-1]; ++j) {
            pre_course.insert(dp[i - 1][j]);
        }
        for (int j = 0; j < n_num[i]; ++j) {
            for(auto k: cant[i][j]) {
                pre_course.erase(pre_course.find(dp[i - 1][k]));
            }
            if(pre_course.empty()) {
                dp[i][j] = NIF;
            } else {
                dp[i][j] = *pre_course.begin() + course[i][j];
            }
            for(auto k: cant[i][j]) {
                pre_course.insert(dp[i - 1][k]);
            }
        }
    }
    int ans = *min_element(dp[3].begin(), dp[3].end());
    if(ans > 4e8) {
        ans = -1;
    }
    cout << ans << endl;
}