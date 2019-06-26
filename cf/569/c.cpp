/*
 * @Author: czqsole
 * @Date: 2019-06-22 14:34
 */
#include <bits/stdc++.h>

using namespace std;
const int N = 200005;


void print_vector(vector<int> a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n, q;
    vector<int> de(N);
    vector<int> alist(N);
    vector<int> blist(N);
    vector<int> final(N);

    cin >> n >> q;
    int _max = -1, index = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> de[i];
        if(de[i] > _max) {
            _max = de[i];
            index = i;
        }
    }

    int cnt = 0;
    for (int i = index; i <= n ; ++i) {
        final[cnt++] = de[i];
    }

    int A = de[1], B = de[2];
    int acnt = 0, bcnt = 0;
//    alist[acnt++] = A;
//    blist[bcnt++] = B;
    for(int i = 2;i <= index;i++) {
        alist[acnt++] = A;
        B = min(A, de[i]);
        A = max(A, de[i]);
//        alist[acnt++] = A;
        blist[bcnt++] = de[i];
        final[cnt++] = B;
    }

//    print_vector(alist, acnt);
//    print_vector(blist, bcnt);
//    print_vector(final, cnt);


    for (int i = 0; i < q; ++i) {
        long long m;
        int ansA, ansB;
        cin >> m;
        if(m < index) {
            ansA = alist[m - 1];
            ansB = blist[m - 1];
        } else {
            m -= index;
            int tmp_index = (int)(m % (n - 1)) + 1;
            ansA = _max;
            ansB = final[tmp_index];
        }
        cout << ansA << " " << ansB << endl;
    }

}