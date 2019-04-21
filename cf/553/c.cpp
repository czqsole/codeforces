/*
 * @Author: czqsole
 * @Date: 2019-04-19 11:59
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;
    int i = 1;
    long long num = 1;
    long long num2 = 1;
    while( (num + num2) < l) {
        if(i % 2 == 0) {
            num *= 2;
        } else {
            num2 *= 2;
        }
    }
    i--;
    if(i % 2 == 0) {

    }

}