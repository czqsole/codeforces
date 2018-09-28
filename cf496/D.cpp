/*
 * @Author: czqsole
 * @Date: 2018/7/9
 */
#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    string s;
    int a[20005];
    int sum[20005];
    cin>>s;
    int len = s.length();
    for(int i=0;i<len;i++) {
        a[i] = s[i] - 49;
        if(i == 0) {
            sum[i] = a[i];
        } else {
            sum[i] = a[i] + sum[i-1];
        }
    }


}