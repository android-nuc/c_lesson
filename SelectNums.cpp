//输出字符串中的所有数字
#include<stdio.h>
#include<string.h>
int main() {
    char strings[100];
    gets(strings);
    //char strings[] = "us132sad123daioadj12345ssd12ada";
    int i;
    int length = strlen(strings);
    //获取到字符串的长度
    for(i = 0;i < length;i++) {
        //48 - 57 数字的范围
        if(strings[i] >= 48 && strings[i] <= 57) {
            //这是一个数字
            printf("%c ",strings[i]);
        }
    }
    //烫 --- >代表字符串溢出
    //char a = '9';  //char --- int
    //printf("%d",a);
    return 0;
}
