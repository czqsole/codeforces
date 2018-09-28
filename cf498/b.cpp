/*
 * @Author: czqsole
 * @Date: 2018/7/16
 */
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    int a[2005] = {0};
    int b[2005] = {0};
    int ans[2005] = {0};
    map<int, int> times;
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int total = 0;
    for(int i=n-1;i > (n-1-k);i--) {
        total+=b[i];
        times[b[i]]++;
    }
    int last = -1;
    int all=0;
    for(int i = 0, j = 0;i < n && j<k;i++) {
        if(times[a[i]] > 0) {
            ans[j] = i-last;
            all+=ans[j];
            j++;
            times[a[i]]--;
            last = i;
        }
    }
    ans[k-1] += n-all;
    cout<<total<<endl;
    for(int i=0;i<k;i++) {
        if(i == 0) {
            cout<<ans[i];
        } else {
            cout<<" "<<ans[i];
        }
    }
    cout<<endl;
}