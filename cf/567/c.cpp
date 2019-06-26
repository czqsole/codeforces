/*
 * @Author: czqsole
 * @Date: 2019-06-18 17:37
 */
#include <bits/stdc++.h>

using namespace std;

const int N = 1000 + 5;
vector<string> a(N);

bool check_row(int r, int c, int h) {
    char ch = a[r][c];
    for(int i = r; i < r + h;i++) {
        if(a[i][c] != ch) {
            return false;
        }
    }
    return true;
}

bool check_col(int r, int c, int h) {
//    for (int i = 0; i < 3*h; ++i) {
//        if(a[r][c + i] != a[])
//    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int i = 0;
    while(i < n) {
        for(int j = 0;j < m;j++) {
            int height = 0;
            while(i + 1 < n && a[i][j] == a[i+1][j]) {
                i++;
                height++;
            }
            char c1 = a[i][j];
            char c2 = a[i + height][j];
            char c3 = a[i + 2*height][j];
            if(c1 != c2 && c2 != c3 && c2 != c3 && check_row(i + height, j, height) && check_row(i + 2 * height, j, height)) {

            }

        }
    }
}