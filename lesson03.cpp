#include<stdio.h>
#include<string.h>  //字符串函数头文件
int main() {
    //字符串其实也相当于数组
    //数组
    //定义字符串或者数组的时候一定要有长度，否则会报错
//    int nums[] = {1,0};  //定义数组 根据后面花括号中的数字个数 判断这格数组的长度   数组中地每个数已经赋值
//    int numsA[10];    //直接告诉系统数组的长度    但是数组中的每个数都没有赋值

//    float f[50];
//    double d[100];
//    char c[100];
//    int numSS[3][7]; //
//把二维数组看做一个矩阵 那么前面的数 -- 行数   后面的数  -- 列数
//
        //字符串
//        char name[] = {'q','y','z'};    //和数组类似的字符串初始化
//        char nameS[] = "qiaoyunr4ui1多级";  //字符串特有的初始化方式   注意是双引号
//        int i;
//        printf("%s\n",nameS);   //字符串用%s输出
//        //后面的参数是字符串的名字 也就是字符串中第一个字符的地址
//        char address[20];
//        scanf("%s",nameS);  //输入语句后面必须是一个地址
//        scanf("%d %d",&a,&b);     //a是一个变量 那么 &a就是一个地址
//        & -地址符号
//        int a;
//        &a; -->a的地址
//        int m[10]; m[0] ---> 变量   m --> &m[0]
//        //数组的名字是一个地址
//        //字符串的名字也是一个地址
//        scanf("%d",&a);
        char string1[10];
        char string2[10];
        //scanf("%s %s",string1,string2);
        //回车和空格是输入的分隔符
        //printf("%s %s",string1,string2);
        gets(string1);  //输入
        puts(string1);  //输出
        int length = 0;
        length = strlen(string1);
        /** strlen() -- 字符串求长度
        */
        /** strcpy() -- 字符串复制函数
        */
        strcpy(string2,string1);    //字符串复制函数
        //把后面字符串中的内容复制到前面字符串
        printf("%d\n",length);
        puts(string2);
    return 0;
}
