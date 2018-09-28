/*
 * @Author: czqsole
 * @Date: 2018/8/11
 */
#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    int p[1005] = {0};
    map<int, int> v;
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin>>p[i];
    }
    for(int a=1;a<=n;a++) {
        for(int k=0;k<=n;k++) v[k] = 0;

        int b=p[a];
        v[a]++;
        while(v[b] < 2) {
            v[b]++;
            b = p[b];
        }

        if(a > 1) cout<<" ";
        cout<<b;
    }
    cout<<endl;
}