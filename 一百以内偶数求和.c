#include<stdio.h>
int main()
{
    int i,sum = 0;
    for(i = 1;i <= 100;i++)
    {
        //�ж��Ƿ�Ϊż��
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("һ������ż���ĺͣ�%d",sum);
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
