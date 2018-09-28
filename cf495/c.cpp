//
// Created by 晁占强 on 2018/7/6.
//
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    int a[100000 + 5]={0};
    int b[100000 + 5]={0};
    int m[100000 + 5]={0};
    int c[100000 + 5]={0};
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    b[n]=0;
    for(int i=n-1;i>=0;i--) {
        if(m[a[i]] == 0) {
            b[i] = b[i+1] + 1;
        } else {
            b[i] = b[i+1];
        }
        m[a[i]]++;
    }
    long long ans=0;
    for(int i=0;i<n-1;i++) {
        //printf("b[%d]=%d  ", i, b[i]);
        //printf("c[%d]=%d\n", a[i], c[a[i]]);
        if(c[a[i]] > 0) {
            continue;
        } else {
            c[a[i]] = 1;
        }
        ans= ans + b[i+1];
    }
    cout<<ans<<endl;
}
