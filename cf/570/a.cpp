/*
 * @Author: czqsole
 * @Date: 2019-06-26 22:21
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 10005;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
//    vector<int> a(N);
    int a;
    cin >> a;
    for (int i = a; i <= 1111 ; ++i) {
        int t = i;
        int sum = 0;
        while(t) {
            sum += (t % 10);
            t /= 10;
        }
        if(sum % 4 == 0) {
            cout << i << "\n";
            break;
        }
    }
}