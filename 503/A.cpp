/*
 * @Author: czqsole
 * @Date: 2018/8/11
 */
#include <iostream>

using namespace std;

int main() {
    long long n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    for(int i=0;i<k;i++) {
        long long ta, fa, tb, fb;
        cin >> ta >> fa >> tb >> fb;
        long long ans = tb - ta;
        if(ta > tb) {
            ans  = ta - tb;
        } else {
            ans  = tb - ta;
        }

        if(ta == tb) {
            if(fa > fb) {
                ans += fa - fb;
            } else {
                ans += fb - fa;
            }
        } else {
            if(fa < a) {
                ans += a-fa;
                fa = a;
            } else if(fa > b) {
                ans += fa - b;
                fa = b;
            }

            if(fb < a) {
                ans += a - fb;
                fb = a;
            } else if(fb > b) {
                ans += fb - b;
                fb = b;
            }

            if(fa > fb) {
                ans += fa - fb;
            } else {
                ans += fb - fa;
            }
        }
        cout << ans << endl;
    }
}