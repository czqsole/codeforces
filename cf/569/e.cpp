/*
 * @Author: czqsole
 * @Date: 2019-06-26 16:57
 */
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000005;
int s[MAXN * 4] = {0}, lz[MAXN * 4] = {0}, n, m, a[300005], b[300005];

void push(int x, int l, int r) {
    if(lz[x] == 0) {
        return;
    }
    s[x] += lz[x];
    if(l != r) {
        lz[x * 2] += lz[x];
        lz[x * 2 + 1] += lz[x];
    }
    lz[x] = 0;
}

void upd(int x, int l, int r, int ll, int rr, int val) {
    push(x, l, r);
    if(l > rr || r < ll) {
        return;
    }
    if(l >= ll && r <= rr) {
        lz[x] += val;
        push(x, l, r);
        return;
    }
    int mid = (l + r) / 2;
    upd(x * 2, l, mid, ll, rr, val);
    upd(x * 2 + 1, mid + 1, r, ll, rr, val);
    s[x] = min(s[x * 2], s[x * 2 + 1]);
}

int query(int x, int l, int r) {
    push(x, l, r);
//    cout << x << " " << l << " " << r << " " << s[x] << endl;
    if(s[x] >= 0) {
        return -1;
    }
    if(l == r) return l;
    int mid = (l + r) / 2;
    int rx = query(x * 2 + 1, mid + 1, r);
    if(rx != -1) {
        return rx;
    }
    return query(x * 2, l, mid);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        upd(1, 1, MAXN - 1, 1, a[i], -1);
    }
    for (int i = 1; i <= m; ++i) {
        cin >> b[i];
        upd(1, 1, MAXN - 1, 1, b[i], 1);
    }

//    for (int i = 1; i <= 10; ++i) {
//        cout << "i=" << i << ", s[i]=" << s[i] << " " << endl;
//    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int qt, qi, qx;
        cin >> qt >> qi >> qx;
        if(qt == 1) {
            upd(1, 1, MAXN - 1, 1, a[qi], 1);
            a[qi] = qx;
            upd(1, 1, MAXN - 1, 1, qx, -1);
        } else if(qt == 2) {
            upd(1, 1, MAXN - 1, 1, b[qi], -1);
            b[qi] = qx;
            upd(1, 1, MAXN - 1, 1, qx, 1);
        }
        cout << query(1, 1, MAXN - 1) << "\n";
    }
}