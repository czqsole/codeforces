//
// Created by 晁占强 on 2018/7/5.
//
#include <stdio.h>

int main() {
    int n;
    int a[105]={0};
    int ans = -1;
    scanf("%d", &n);
    for(int i=0; i<n;i++) {
        int tmp;
        scanf("%d", &tmp);
        a[tmp]++;
        if(a[tmp] > ans) {
            ans = a[tmp];
        }
        //printf("tmp=%d a[tmp]=%d ans=%d\n", tmp, a[tmp], ans);
    }
    printf("%d\n", ans);

    return 0;
}
