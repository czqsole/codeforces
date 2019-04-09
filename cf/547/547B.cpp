/*
 * @Author: czqsole
 * @Date: 2019-03-29 18:44
 */
#include <bits/stdc++.h>

using namespace std;


int main() {
    int a[200005] = {0};
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int first = 0;
    int last = 0;

    for(int i = 0;i < n; i++) {
        if(a[i] == 0) {
            first = i;
            break;
        }
    }
    for(int i = n - 1; i >=0 ;i--) {
        if(a[i] == 0) {
            last = i;
            break;
        }
    }
    int i = 0;
    int ans = first + (n - 1 - last);
    while (i < n) {
        if(a[i] == 1) {
            int j=i;
            while(j < n && a[j] == 1) {
                j++;
            }
            ans = max(ans, j - i);
            i = j;
        } else {
            i++;
        }
    }
    cout << ans << endl;
}