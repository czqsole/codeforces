/*
 * @Author: czqsole
 * @Date: 2018/7/13
 */
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[100005] = {};
    int b[100005] = {};
    cin >> n;
    int t1, t2;
    for(int i=0;i < n;i++) {
        cin >> t1 >> t2;
        if(t1 > t2) {
            a[i] = t1;
            b[i] = t2;
        } else {
            a[i] = t2;
            b[i] = t1;
        }
    }
    bool  ans = true;
    int pre = 1000000000 + 5;
    for(int i=0;i<n;i++) {
        if(a[i] <= pre) {
            pre = a[i];
        } else if(b[i] <= pre) {
            pre = b[i];
        } else {
            ans = false;
            break;
        }
    }

    if(ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}