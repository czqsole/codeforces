/*
 * @Author: czqsole
 * @Date: 2019-03-05
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int c1, c2, c3, c4;

   cin >> c1 >> c2 >> c3 >> c4;

   int ans = 0;
   if(c3 == 0) {
      if(c1 == c4) {
         ans = 1;
      }
   } else {
      if(c1 == c4 && c1 > 0) {
         ans = 1;
      }
   }
   cout << ans << endl;

}