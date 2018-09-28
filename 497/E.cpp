/*
 * @Author: czqsole
 * @Date: 2018/7/14
 */
#include <iostream>

using namespace std;

int main() {
    long long n;
    long long x=1,y=1;
    cin >> n;
    int ans=-1;
    while(1) {
        if(ans == 0) {
            fflush(stdout);
            break;
        }

        if( ans == 1) {
            x = (x + 1 + n) / 2;
        }
        if( ans == 2) {
            y = (y + 1 + n) / 2;
        }
        if( ans == 3) {
           if(x == 1) {
               y = y / 2;
           } else {
               x = x / 2;
           }
        }
        cout<<x << " " <<y;
        fflush(stdout);
        cin >> ans;
    }
}