#include <stdio.h>
int main() {
    int index = 10;
//    while (index > 0) {
//        printf("HH\n");
//        index--;
//    }
//    do {
//        printf("HH\n");
//        index--;
//    } while(index > 0);
    //两个循环最大的区别就是
    //do while 先执行后判断
    //while 先判断 后执行
    //do....while后一定要加一个分号
    //for(,,)for语句后面的括号必须要有两个分号 推荐大家使用规范格式   → for(i = 0;i < 10;i++) {}
    //在进行每一次循环之前必须要判断是否可以进行循环（除了 do ... while 的第一次循环s）
    /*int i = 0;
    for (;i < 100;i++) {
        if (i == 67) {
            //continue;   //跳出当前循环
            //break;  //直接跳出循环
        }
        printf("%d\n",i);
    }*/
    /**100以内 把所有的5的倍数输出来
    */
    int n = 0;
    for(n = 0; n < 100; n++) {
        if(n % 5 == 0) {
            printf("%d\n", n);
        }
    }
    return 0;
}



