#include<stdio.h>
//ָ��ָ������
//������ܱȽ��� �������Ĳ���һ��
int main() {
    int num[10][10];
    for(int i = 0;i < 10;i++) {
        for(int j = 0;j < 10;j++) {
            num[i][j] = i + j;
        }
    }
    int *node = &num[0][0]; //ָ��ָ�������һ��Ԫ��
    for(int i = 0;i < 10;i++) {
        for(int j = 0;j < 10;j++) {
            printf("%3d ",*(node + i) + j);     //ͨ��ָ�����
        }
        printf("\n");
    }
    return 0;
}
