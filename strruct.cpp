//�ṹ��
#include<stdio.h>
#include<string.h>
struct person{  //���Ƕ���һ���ṹ��
    int age;
    char name[10];  //�ַ���   %s
    char sex;
};
int main() {
    //���Ϳ��԰�һ���ṹ���е�Ԫ�ص�����
//    struct person he;   //����һ���ṹ��
//    he.age = 30;
//    strcpy(he.name,"aobama");
//    he.sex = 'M';
//    struct person man[10];  //�����ṹ������
//    man[0].age = 50;
//    strcpy(man[0].name,"lalal");
//    man[0].sex = 'F';
//    printf("%d %s %c\n",man[0].age,man[0].name,man[0].sex);
    int num = 99;
    int* p = &num;  //p��ָ��num  p��ֵ����  num �ĵ�ַ
    printf("%d  %d   %d   %d",num,&num,p,*p);   //*p == num
    return 0;
}
// p   --- int * float *m;   m ---- float *;
//p --- ָ��
//--- ָ��ָ��Ķ���
//\
//int m = 5;
//int* p = &m;  //p��������m�ĵ�ַ;
//*p == m;           //*p����m
//    //&m   �� m�ĵ�ַ  ���� p ��ֵ

