/*
 * @Author: czqsole
 * @Date: 2018/7/13
 */
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans = true;
    int len = s.length();
    for(int i=0;i<len;i++) {
        if(s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && s[i] != 'e' && s[i] != 'n') {
            if(i == len -1) {
                ans = false;
            } else {
                if(s[i+1] != 'a' && s[i+1] != 'o' && s[i+1] != 'u' && s[i+1] != 'i' && s[i+1] != 'e') {
                    ans = false;
                    break;
                }
            }
        }
    }
    if(ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}