//
// Created by 晁占强 on 2018/7/5.
//
#include<stdio.h>

int main() {
    int a, b, x;
    scanf("%d%d%d", &a, &b, &x);
    char a[205]={};
    if(a < b) {
        for(int i=0;i<x;i+=2) {
            a[i]="0";
            a[i+1]="1";
        }
    }
}
