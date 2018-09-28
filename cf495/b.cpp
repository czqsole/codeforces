//
// Created by 晁占强 on 2018/7/6.
//
#include <stdio.h>

int main() {
    int n, m;
    int l, r;
    scanf("%d%d", &n, &m);
    for(int i=0;i<m;i++) {
        scanf("%d%d", &l, &r);
    }
    for(int i=0;i<n;i++) {
        if(i%2 == 0) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}
