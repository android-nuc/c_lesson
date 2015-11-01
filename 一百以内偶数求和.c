#include<stdio.h>
int main()
{
    int i,sum = 0;
    for(i = 1;i <= 100;i++)
    {
        //判断是否为偶数
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("一百以内偶数的和：%d",sum);
    return 0;
}

//#include<stdio.h>
//int main()
//{
//    int i,sum = 0;
//    for (i=2;i <= 100;i+=2)
//    {
//        sum+=i;
//    }
//    printf("%d\n",sum);
//
//    return 0;
//}
