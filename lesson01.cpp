#include<stdio.h>
int main() {
//    int a = 1;  //4个字节（注意：不同的编译器有可能不一样）
//    float b = 5.3f;    //4个字节
//    double f = 3.6;   //8个字节
//    char c = 'q';     //1个字节
//    int sizeS = sizeof(c);  //用sizeof()函数 求一个变量所占内存大小
//    printf("%d\n",sizeS);
//i++ 与 ++i的区别
//    int a = 0,b = 0;
//    printf("%d\n",a++); //先输出后加一  0
//    printf("%d\n",++b);    //现加一后输出   1
    int score = 0;  //成绩
    int scoreS = 10;
    scanf("%d",&score);
//    int index = score / 10;
//    switch(index) {
//        case 10: printf("A\n");
//        break;
//        case 9: printf("B\n");
//        break;
//        case 8:   //这两种情况的处理方式一样  就可以采用这样的方式
//        case 7:
//            break;
//        default: printf("HH\n");  //当 index 和上面的 数都不一样的 那么就会执行这默认选项(default)
        //注意：一定不要忘记 break;
//    }
//    int result = score > scoreS ? score : scoreS;
//    printf("%3d",score);  //%f -- 小数 %c --字符 %d -- 整数
//    printf("%3d",score);
//    if (score == 10 || score == 20) {
//        printf("10");
//    }
//   a || b : a和b之间有一个成立即可
//   a && b : a 和 b必须要全部成立
//     ！a ：   a成立，那么!a 不成立
                //a不成立 ，那么!a成立
    return 0;
}
//（Codeblockes的快捷键）
//ctrl + shift + c 注释
//Ctrl + shift + x 取消注释
