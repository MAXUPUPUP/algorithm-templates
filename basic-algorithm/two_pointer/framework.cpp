#include<iostream>
using namespace std;

//LC.42 接雨水
//1.对撞指针
int n = 0;
int l = 0, r = n - 1;
while(l < r){
    if() {}
    if() l ++;
    else r --;
}


//2.快慢指针
int slow = 0;
for(int fast = 0; fast < n; fast ++){
    if(){
        a[slow ++] = a[fast];
    }
}
//[0, slow) 为结果区间

//3.滑动窗口
int l = 0;
for(int r = 0; r < n; r ++){
    //a[r]进入窗口，更新状态。
    while(窗口不合法){
        //a[l]离开窗口，更新状态。
        l ++;
    }
    //窗口[l, r]是一个合法窗口，更新答案。
    // 求最短：把更新答案移到 while 循环内部
}

//4.链表快慢指针
auto slow = head, fast = head;
while(fast && fast -> next){
    slow = slow -> next;
    fast = fast -> next -> next;
    if(slow == fast){
        //链表有环
    }
    //出循环时 slow在中点
}


//5.双序列指针(归并型)
int i = 0, j = 0;
while( i < n && j < m){
    if() {i ++;}
    else {j ++;}
}
while(i < n){i ++;}
while(j < m){j ++;}

