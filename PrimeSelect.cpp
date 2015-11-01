//素数选择
//如果大家想搞懂这个问题的话就来问我
#include<stdio.h>
int main() {
    int targetNum = 0;
    scanf("%d",&targetNum);
    int i,j,sign = 0,divideNum = 0;
    for (i = 2;i < targetNum;i++) {
        divideNum = 0;
        for(j = 2;j < i;j++) {
            if (i % j == 0) {   //可以整除
                divideNum++;
            }
        }
        if (divideNum == 0) {   //不被任何一个数整除
            printf("%d ",i);
        }
    }
    return 0;
}
