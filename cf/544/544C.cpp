/*
 * @Author: czqsole
 * @Date: 2019-03-07
 */
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

const int qq=200000+5;
int city[qq];

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> city[i];
    }

    sort(city, city + n);

    int ans = -1;
    int tmp = 0;
    for(int i=0,j=0;i<n && j<n;) {
        while(city[j] - city[i] <= 5 && j < n) j++;
        i++;
        ans = max(ans, j - i + 1);
        tmp = 0;
    }
    cout << ans << endl;
}