//����ַ����е���������
#include<stdio.h>
#include<string.h>
int main() {
    char strings[100];
    gets(strings);
    //char strings[] = "us132sad123daioadj12345ssd12ada";
    int i;
    int length = strlen(strings);
    //��ȡ���ַ����ĳ���
    for(i = 0;i < length;i++) {
        //48 - 57 ���ֵķ�Χ
        if(strings[i] >= 48 && strings[i] <= 57) {
            //����һ������
            printf("%c ",strings[i]);
        }
    }
    //�� --- >�����ַ������
    //char a = '9';  //char --- int
    //printf("%d",a);
    return 0;
}
