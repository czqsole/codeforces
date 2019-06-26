/*
 * @Author: czqsole
 * @Date: 2019-06-25 17:15
 */
#include <bits/stdc++.h>

using namespace std;


vector<int> s;
void split(int x,int y, int id = 1,int l = 0, int r = n){//	id is the index of the node
    if(x >= r or l >= y)	return ;	// in this case, intersect of [l,r) and [x,y) is empty
    if(x <= l && r <= y){
        s.push_back(id);
        return ;
    }
    int mid = (l+r)/2;
    split(x,y,id * 2,l,mid);
    split(x,y,id * 2 + 1,mid,r);
}

// 构造线段树
void build(int id = 1,int l = 0,int r = n){
    if(r - l < 2){	//	l + 1 == r
        s[id] = a[l];
        return ;
    }
    int mid = (l+r)/2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid, r);
    s[id] = s[id * 2] + s[id * 2 + 1];
}


// M p x: 把ap的值修改为x
void modify(int p,int x,int id = 1,int l = 0,int r = n){
    s[id] += x - a[p];
    if(r - l < 2){	//	l = r - 1 = p
        a[p] = x;
        return ;
    }
    int mid = (l + r)/2;
    if(p < mid)
        modify(p, x, id * 2, l, mid);
    else
        modify(p, x, id * 2 + 1, mid, r);
}

// [x, y]区间求和
int sum(int x,int y,int id = 1,int l = 0,int r = n){
    if(x >= r or l >= y)	return 0;
    if(x <= l && r <= y)	return s[id];
    int mid = (l+r)/2;
    return sum(x, y, id * 2, l, mid) +
           sum(x, y, id * 2 + 1, mid, r);
}

// 区间更新：l ≤ i < r, ai += x

vector<int> lazy;
//	increase all members in this interval by x
void upd(int id,int l,int r,int x){
    lazy[id] += x;
    s[id] += (r - l) * x;
}

//pass update information to the children
void shift(int id,int l,int r){
    int mid = (l+r)/2;
    upd(id * 2, l, mid, lazy[id]);
    upd(id * 2 + 1, mid, r, lazy[id]);
    lazy[id] = 0;// passing is done
}

// increase(l, r, x)
void increase(int x,int y,int v,int id = 1,int l = 0,int r = n){
    if(x >= r or l >= y)	return ;
    if(x <= l && r <= y){
        upd(id, l, r, v);
        return ;
    }
    shift(id, l, r);
    int mid = (l+r)/2;
    increase(x, y, v, id * 2, l, mid);
    increase(x, y, v, id*2+1, mid, r);
    s[id] = s[id * 2] + s[id * 2 + 1];
}

// sum(l, r)
int sum(int x,int y,int id = 1,int l = 0,int r = n){
    if(x >= r or l >= y)	return 0;
    if(x <= l && r <= y)	return s[id];
    shift(id, l, r);
    int mid = (l+r)/2;
    return sum(x, y, id * 2, l, mid) +
           sum(x, y, id * 2 + 1, mid, r);
}

int main() {
    ios_base::sync_with_stdio(false);

}