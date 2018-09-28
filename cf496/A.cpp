#include<cstdio>
#include<iostream>
using namespace std;

int main() {
    int n, ans;
    int a[1005]={0};
    int b[1005]={0};
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    ans=0;
    for(int i=1;i<n;i++) {
        if(a[i] == 1) {
            b[ans]=a[i-1];
            ans++;
        }
    }
    b[ans] = a[n-1];
    ans++;
    printf("%d\n", ans);
    for(int i=0;i<ans;i++) {
        if(i == 0) {
            printf("%d", b[i]);
        } else {
            printf(" %d", b[i]);
        }
    }
    printf("\n");
}