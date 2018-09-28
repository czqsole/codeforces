/*
 * @Author: czqsole
 * @Date: 2018/7/16
 */
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    int a[100005] = {0};
    cin >> n;
    int rm=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            a[i] = a[i] - 1;
        }
    }

    for(int i=0;i<n;i++) {
        if(i == 0) {
            cout << a[i];
        } else {
            cout << " " << a[i];
        }
    }
    cout<<endl;

}