//����ѡ��
//��������㶮�������Ļ���������
#include<stdio.h>
int main() {
    int targetNum = 0;
    scanf("%d",&targetNum);
    int i,j,sign = 0,divideNum = 0;
    for (i = 2;i < targetNum;i++) {
        divideNum = 0;
        for(j = 2;j < i;j++) {
            if (i % j == 0) {   //��������
                divideNum++;
            }
        }
        if (divideNum == 0) {   //�����κ�һ��������
            printf("%d ",i);
        }
    }
    return 0;
}
