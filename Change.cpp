#include <stdio.h>
//分别演示两种交换方式
int main() {
    void swapIndex(int indexA,int indexB);
    void swapNode(int *nodeA,int *nodeB);
    int indexA = 5,indexB = 8;
    int *nodeA,*nodeB;
    printf("初始化： indexA = %d indexB = %d\n",indexA,indexB);
    swapIndex(indexA,indexB);
    printf("形参交换:   indexA = %d indexB = %d\n",indexA,indexB);
    indexA = 5;
    nodeA = &indexA;
    indexB = 8;
    nodeB = &indexB;
    swapNode(nodeA,nodeB);
    printf("指针交换：  indexA = %d indexB = %d\n",indexA,indexB);
}
void swapIndex(int indexA,int indexB) { //无返回值的数值交换   失败
    int temp = indexA;
    indexA = indexB;
    indexB = temp;
}
void swapNode(int *nodeA,int *nodeB) {  //通过指针实现交换 成功
    int temp = *nodeA;
    *nodeA = *nodeB;
    *nodeB = temp;
}

//tip ： 关于这两种交换方式书上的函数章节和指针章节都有讲解 指针交换和形参交换确实优点难 大家结合我的例子慢慢体会
//相信你们一定会懂的！！
