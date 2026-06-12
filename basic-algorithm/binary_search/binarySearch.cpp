#include<iostream>
using namespace std;

bool check(int x){
    //检查x是否满足某种性质
}

//区间[l,r]被划分成[l, mid]和[mid+1, r]
int binary_search1(int l, int r){
    while(l < r){
        int mid = l + r >> 1;
        if(check(mid)) r = mid;
        else l = mid + 1;
    }
    return l;
}

//区间[l, r]被划分成[l, mid-1]和[mid, r]
int binary_search2(int l, int r){
    while(l < r){
        int mid = l + r + 1 >> 1;
        if(check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}

//atcoder Meguru
long long ok = 666;   // 一个确定满足条件的值
long long ng = 666;   // 一个确定不满足条件的值
int Meguru_binary_search(){
    while (abs(ok - ng) > 1) {
        long long mid = (ok + ng) / 2;
        if (check(mid)) ok = mid;
        else ng = mid;
    }   
    return ok;
}
// 结束后 ok 就是"满足条件的最优值"