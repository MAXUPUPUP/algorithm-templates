
// 选择排序：每次从未排序区选最小值，放到已排序区末尾
// 插入排序：把当前元素插入到前面已排序区的正确位置
// 冒泡排序：相邻元素两两比较交换，大的往后沉
// 时间复杂度 O(n^2)，空间复杂度 O(1)，稳定排序

#include<iostream>
using namespace std;

void selection_sort(int a[], int n){
    for(int i = 0; i < n - 1; i ++){
        int min_idx = i;
        for(int j = i + 1; j < n; j ++){
            if(a[j] < a[min_idx]) min_idx = j;
        }
        swap(a[i], a[min_idx]);
    }
}

void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i ++){
        int key = a[i], j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j --;
        }
        a[j + 1] = key;
    }
}
void bubble_sort(int a[], int n){
    for(int i = 0; i < n - 1; i ++){
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j ++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    int a[] = {64, 25, 12, 22, 11};
    selection_sort(a, 5);
    bubble_sort(a, 5);
    insertion_sort(a, 5);
    cout << "Sorted array: ";
    for(int i = 0; i < 5; i ++){
        cout << a[i] << " ";
    }
    return 0;
}
