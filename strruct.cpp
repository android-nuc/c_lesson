//结构体
#include<stdio.h>
#include<string.h>
struct person{  //这是定义一个结构体
    int age;
    char name[10];  //字符串   %s
    char sex;
};
int main() {
    //。就可以把一个结构体中的元素调出来
//    struct person he;   //这是一个结构体
//    he.age = 30;
//    strcpy(he.name,"aobama");
//    he.sex = 'M';
//    struct person man[10];  //创建结构体数组
//    man[0].age = 50;
//    strcpy(man[0].name,"lalal");
//    man[0].sex = 'F';
//    printf("%d %s %c\n",man[0].age,man[0].name,man[0].sex);
    int num = 99;
    int* p = &num;  //p就指向num  p的值就是  num 的地址
    printf("%d  %d   %d   %d",num,&num,p,*p);   //*p == num
    return 0;
}
// p   --- int * float *m;   m ---- float *;
//p --- 指针
//--- 指针指向的东西
//\
//int m = 5;
//int* p = &m;  //p的内容是m的地址;
//*p == m;           //*p就是m
//    //&m   是 m的地址  就是 p 的值

