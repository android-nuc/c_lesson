//函数
//函数可以有返回值 也可以没有返回值
//函数可以有参数  也可以没有参数
//在调用函数之前一定要声明函数    否则会报错
#include<stdio.h>
int main() {    //主函数
    int mmm();  //声明函数
    void sayHello();
    int maxS(int a,int b);
    int swapS(int a,int b);

    int i;
    i = mmm();  //有返回值的前面可有可无接收器
    sayHello(); //无返回值的前面一定不能有接收器
    int result = maxS(3,4); //获取返回的最大值
    printf("%d\n",result);
    int ai = 8,bi = 9; //给函数传递值
    printf("%d   %d\n",ai,bi);    //8 9
    ai = swapS(ai,bi);  //ai接受函数返回的值 bi 没有
    printf("%d   %d\n",ai,bi);    //9 8
    return 0;
}

int mmm() {
    return 0;
}
void sayHello() {
    printf("HELLO\n");
}
int maxS(int a,int b) { //比较a和b的大小
   if(a > b) {
        return a;
   } else {
        return b;
   }
}
//一个有返回值的函数 在函数中 一定要有return
//无返回值   一定不能有

int swapS(int a,int b) {   //默认   有 a 和 b 两个变量
    int temp = a;
    a = b;
    b = temp;
    printf("------%d   %d\n",a,b);    //9 8
    return a;
}

//int a,int b;
//a = ai; //值传递 8
//b = bi; 9
//a = 9;
//b = 8;
////有返回值   双向的
//ai = a; 9
//bi = b; 8
//
//int a;  //数据类型
//结构体 相当于自己定义的数据类型



