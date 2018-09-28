//
// Created by 晁占强 on 2018/7/6.
//
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    int a[105]={0};
    scanf("%d%d", &n, &d);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int ans=2;
    for(int i=1;i<n;i++) {
        if(a[i] - a[i-1] == 2*d) {
            ans++;
        } else if(a[i] - a[i-1] > 2*d) {
            ans+=2;
        }
    }
    printf("%d\n", ans);
}
