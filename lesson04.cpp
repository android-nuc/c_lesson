//����
//���������з���ֵ Ҳ����û�з���ֵ
//���������в���  Ҳ����û�в���
//�ڵ��ú���֮ǰһ��Ҫ��������    ����ᱨ��
#include<stdio.h>
int main() {    //������
    int mmm();  //��������
    void sayHello();
    int maxS(int a,int b);
    int swapS(int a,int b);

    int i;
    i = mmm();  //�з���ֵ��ǰ����п��޽�����
    sayHello(); //�޷���ֵ��ǰ��һ�������н�����
    int result = maxS(3,4); //��ȡ���ص����ֵ
    printf("%d\n",result);
    int ai = 8,bi = 9; //����������ֵ
    printf("%d   %d\n",ai,bi);    //8 9
    ai = swapS(ai,bi);  //ai���ܺ������ص�ֵ bi û��
    printf("%d   %d\n",ai,bi);    //9 8
    return 0;
}

int mmm() {
    return 0;
}
void sayHello() {
    printf("HELLO\n");
}
int maxS(int a,int b) { //�Ƚ�a��b�Ĵ�С
   if(a > b) {
        return a;
   } else {
        return b;
   }
}
//һ���з���ֵ�ĺ��� �ں����� һ��Ҫ��return
//�޷���ֵ   һ��������

int swapS(int a,int b) {   //Ĭ��   �� a �� b ��������
    int temp = a;
    a = b;
    b = temp;
    printf("------%d   %d\n",a,b);    //9 8
    return a;
}

//int a,int b;
//a = ai; //ֵ���� 8
//b = bi; 9
//a = 9;
//b = 8;
////�з���ֵ   ˫���
//ai = a; 9
//bi = b; 8
//
//int a;  //��������
//�ṹ�� �൱���Լ��������������



