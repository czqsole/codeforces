/*
 * @Author: czqsole
 * @Date: 2018/7/16
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string a, b;
    int ans=0;
    cin >> n;
    cin >> a >> b;
    for(int i=0;i<n/2;i++) {
        int j = n-i-1;
       if(a[i] == b[i]) {
           if(a[n-i-1] != b[n-i-1]) {
               ans++;
           }
       } else if(a[i] == b[n-i-1]) {
           if(a[n-i-1] != b[i]) {
               ans++;
           }
       } else {
           if(a[i] == a[j]) {
               if(b[i] != b[j]) ans+=2;
           }
           if(a[i] != a[j] ) {
               if(a[j] == b[i] || a[j] == b[j]) ans++;
               else {
                   if(b[i] == b[j]) ans +=2 ;
                   else ans+=2;
               }

           }
       }
    }
    if(n % 2 == 1) {
        if(a[n/2] != b[n/2]) {
            ans++;
        }
    }
    cout<<ans<<endl;
}