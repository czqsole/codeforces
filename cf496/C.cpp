#include<cstdio>
#include<iostream>
#include <algorithm>
#include <vector>
#include<map>
using namespace std;

int main() {
    int n;
    map<int, int> a;
    map<int,int>::iterator it;
    map<int,int>::iterator it2;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        int tmp;
        scanf("%d", &tmp);
        it = a.find(tmp);
        if(it == a.end()) {
            a[tmp] = 1;
        } else {
            a[tmp] = a[tmp] + 1;
        }
    }
    int b[35] = {0};
    b[0] = 1;
    for(int i=1;i<32;i++) {
        b[i] = 2 * b[i-1];
    }
    int ans=0;
    for(it2 = a.begin(); it2 != a.end();it2++) {
        int tmp = it2->first;
//        printf("tmp=%d\n", tmp);
        bool ok = false;
        for(int i=0;i<32;i++) {
            if(b[i] <= tmp) {
                continue;
            }
            it = a.find(b[i] - tmp);
            if(it != a.end()) {
                int tmp2 = it->first;
                int num = it->second;
                if(tmp == tmp2) {
                    if(num > 1) {
                        ok=true;
                        break;
                    }
                } else {
                    ok=true;
                    break;
                }
            }
        }
        if(!ok) {
            ans+=it2->second;
        }
    }
    printf("%d\n", ans);
}
