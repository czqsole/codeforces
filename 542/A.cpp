/*
 * @Author: czqsole
 * @Date: 2019-02-26
 */
#include <iostream>
#include <cmath>
#include <queue>

using namespace std;


struct block{
    int r;
    int c;
};

int cell[55][55] = {-1};
block dd[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool checkblock(int r, int c, int n) {
    return !(r > n || r < 1 || c > n || c < 1);
}

bool checkBorder(block now, int n) {
    for(int i = 0; i < 4;i ++) {
        block d = dd[i];
        block next = {now.r + d.r, now.c + d.c};
        if(cell[next.r][next.c] != 0){
            return true;
        }
    }
    return false;
}


int main() {
    int n,r1,c1,r2,c2;
    block start = {0, 0};
    block end = {0, 0};
    int use[55][55] = {0};
    int use2[55][55] = {0};
    queue<block> q1;
    cin >> n;
    cin >> start.r >> start.c;
    cin >> end.r >> end.c;
    for(int i = 1; i <= n;i++) {
        string row;
        cin >> row;
        for(int j = 1;j <= n;j++) {
            cell[i][j] = row[j-1] - '0';
        }
    }

//    for(int i = 1; i <= n;i++) {
//        for(int j = 1;j <= n;j++) {
//            cout<<cell[i][j];
//        }
//        cout<<endl;
//    }
//    cout<<endl;

    int ans = 0;
    block list1[3000];
    int l1 = 0;
    bool need = true;
    q1.push(start);
    use[start.r][start.c] = 1;
    while(!q1.empty()) {
        block now = q1.front();
        q1.pop();
//        cout << "now:["  << now.r << "," << now.c << "]" << endl;
        if(checkBorder(now, n)) {
            list1[l1] = now;
            l1++;
        }
        if(now.r == end.r && now.c == end.c) {
            need = false;
            break;
        }

        for(int i = 0; i < 4;i ++) {
            block d = dd[i];
            block next = {now.r + d.r, now.c + d.c};

            if(!checkblock(next.r, next.c, n) || use[next.r][next.c] == 1 || cell[next.r][next.c] == 1) {
                continue;
            }
            use[next.r][next.c] = 1;
            q1.push(next);
        }
    }
    if(need) {
        queue<block> q2;
        block list2[3000];
        int l2 = 0;
        q2.push(end);
        use[end.r][end.c] = 1;
        while(!q2.empty()) {
            block now = q2.front();
            q2.pop();
//            cout << "now:["  << now.r << "," << now.c << "]" << endl;
            if(checkBorder(now, n)) {
                list2[l2] = now;
                l2++;
            }
            for(int i=0;i<4;i++) {
                block d = dd[i];
                block next = {now.r + d.r, now.c + d.c};
                if(!checkblock(next.r, next.c, n) || use2[next.r][next.c] == 1 || cell[next.r][next.c] == 1) {
                    continue;
                }
                use2[next.r][next.c] = 1;
                q2.push(next);
            }
        }
        ans = 50 * 50 * 2 + 100;
        for(int i = 0;i < l1;i++) {
            for(int j=0;j < l2;j++) {
                int ll = list1[i].r - list2[j].r;
                int rr = list1[i].c - list2[j].c;
                int cost = ll * ll + rr * rr;
                if(cost < ans) {
                    ans = cost;
                }
            }
        }
    }
    cout << ans << endl;
}