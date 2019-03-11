/*
 * @Author: czqsole
 * @Date: 2019-03-07
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int h1, m1, h2, m2;

    char a;

    cin >> h1 >> a >> m1;
    cin >> h2 >> a >> m2;

//    cout << h1 << "  " << m1;
//    cout << h2 << "  " << m2;

    int fen = 60 - m1 + m2;

    int allm = (h2-h1) * 60 + fen;
    if(m1 > m2) {
        allm -= 60;
    }

    if(m1 > m2) {
        allm = 60 - m1 + m2 + (h2 - h1 - 1) * 60;
    } else {
        allm = m2 - m1 + (h2 - h1) * 60;
    }

    int half = allm / 2;

    int h3 = h1 + half / 60;
    int m3 = m1 + half % 60;
    if(m3 >= 60) {
        h3 ++;
        m3 -= 60;
    }
    char a1 = '0';
    char a2 = '0';
    if(h3<10) {
        cout << '0';
    }
    cout << h3 << ":";
    if(m3 < 10) {
        cout << '0';
    }
    cout << m3 << endl;

}