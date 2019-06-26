/*
 * @Author: czqsole
 * @Date: 2019-04-29 15:29
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int left = 0, right = n - 1;
    int ans = 0;
    int last = -1;
    while(left <= right) {
        if(a[left] <= last && a[right] <= last) {
            break;
        }
        int ct = 0;
        if(a[left] > last) {
            ct++;
        }
        if(a[right] > last) {
            ct++;
        }
        if(ct == 1) {
            if(a[left] > last) {
                b[ans++] = 1;
                last = a[left];
                left++;
            } else if(a[right] > last) {
                b[ans++] = 2;
                last = a[right];
                right--;
            }
        } else if (ct == 2) {
            if(a[left] < a[right]) {
                b[ans++] = 1;
                last = a[left];
                left++;
            } else if(a[left] > a[right]) {
                b[ans++] = 2;
                last = a[right];
                right--;
            } else if(a[left] == a[right]) {
                int l_max = 0;
                int r_max = 0;
                for (int i = left + 1; i <= right; ++i) {
                    if(a[i] > a[i - 1]) {
                        l_max++;
                    } else {
                        break;
                    }
                }
                for (int i = right - 1; i >= left; i--) {
                    if(a[i] > a[i + 1]) {
                        r_max++;
                    } else {
                        break;
                    }
                }
                if(l_max >= r_max) {
                    for (int i = 0; i < l_max + 1; ++i) {
                        b[ans++] = 1;
                    }
                } else {
                    for (int i = 0; i < r_max + 1; ++i) {
                        b[ans++] = 2;
                    }
                }
                break;
            }
        } else {
            break;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < ans; ++i) {
        if(b[i] == 1) {
            cout << 'L';
        } else {
            cout << 'R';
        }
    }
    cout << endl;
}