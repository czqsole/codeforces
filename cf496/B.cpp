#include<cstdio>
#include<iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    int la = a.length();
    int lb = b.length();
    int i=0;
    if(la <= lb) {
        i = la;
    } else {
        i = lb;
    }
    int ans=-1;
//    printf("%d %d\n", la, lb);
    bool ok= false;
    int j=0;
    for(j=0;j<i;j++) {
//        printf("%c %c\n", a[la-1-j], b[lb-1-j]);
        if(a[la-1-j] == b[lb-1-j]) {
            ok=true;
            continue;
        }
        ans = la - j + lb - j;
        break;
    }
    if(j == i) {
        if(ok) {
            ans = la - j + lb - j;
        }else {
            ans = la + lb;
        }
    }
    printf("%d\n", ans);
}
