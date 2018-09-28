/*
 * @Author: czqsole
 * @Date: 2018/7/16
 */
#include <iostream>

using namespace std;

int main() {
    int n;
    long long a[200005] = {0};
    long long sum[200005] = {0};
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(i == 0) {
            sum[i] = a[i];
        } else {
            sum[i] = sum[i-1] + a[i];
        }
    }
    int l=0,r=n-1;
    long long ans=0;
    if(n > 1) {
        while(l < r) {
            long long sumr = 0l;
            if(r > 0) {
                sumr = sum[n-1] - sum[r-1];
            } else {
                sumr = sum[n-1];
            }
            if(sum[l] == sumr) {
                ans = sum[l];
                l++;
                r--;
                continue;
            }
            if(sum[l] < sumr) l++;
            else r--;
        }
    }
    cout<<ans<<endl;
}