#include<stdio.h>
//利用递归实现的  二分查找法
int main() {
    //函数声明
    int BinSearch(int Array[],int low,int high,int key);
    int Array[] = {22,25,33,36,39,48,49,57,63,73,82,91,100};
    printf("%d\n",BinSearch(Array,0,12,37));
    return 0;
}
/**
*Array 需要查找的数组
*key 要查找到的数字
*返回 -1 没有这个数
*返回 正数 key在Array中的序号
*/
int BinSearch(int Array[],int low,int high,int key) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (key == Array[mid]) {
            return mid;
        } else if (key < Array[mid]) {
            return BinSearch(Array,low,mid - 1,key);
        } else if (key > Array[mid]) {
            return BinSearch(Array,mid + 1,high,key);
        }
    } else {
        return -1;
    }
}

