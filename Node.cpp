#include<stdio.h>
//指针指向数组
//这个可能比较难 有能力的参悟一下
int main() {
    int num[10][10];
    for(int i = 0;i < 10;i++) {
        for(int j = 0;j < 10;j++) {
            num[i][j] = i + j;
        }
    }
    int *node = &num[0][0]; //指针指向数组第一个元素
    for(int i = 0;i < 10;i++) {
        for(int j = 0;j < 10;j++) {
            printf("%3d ",*(node + i) + j);     //通过指针输出
        }
        printf("\n");
    }
    return 0;
}
