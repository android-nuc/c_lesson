#include <stdio.h>
//�ֱ���ʾ���ֽ�����ʽ
int main() {
    void swapIndex(int indexA,int indexB);
    void swapNode(int *nodeA,int *nodeB);
    int indexA = 5,indexB = 8;
    int *nodeA,*nodeB;
    printf("��ʼ���� indexA = %d indexB = %d\n",indexA,indexB);
    swapIndex(indexA,indexB);
    printf("�βν���:   indexA = %d indexB = %d\n",indexA,indexB);
    indexA = 5;
    nodeA = &indexA;
    indexB = 8;
    nodeB = &indexB;
    swapNode(nodeA,nodeB);
    printf("ָ�뽻����  indexA = %d indexB = %d\n",indexA,indexB);
}
void swapIndex(int indexA,int indexB) { //�޷���ֵ����ֵ����   ʧ��
    int temp = indexA;
    indexA = indexB;
    indexB = temp;
}
void swapNode(int *nodeA,int *nodeB) {  //ͨ��ָ��ʵ�ֽ��� �ɹ�
    int temp = *nodeA;
    *nodeA = *nodeB;
    *nodeB = temp;
}

//tip �� ���������ֽ�����ʽ���ϵĺ����½ں�ָ���½ڶ��н��� ָ�뽻�����βν���ȷʵ�ŵ��� ��ҽ���ҵ������������
//��������һ���ᶮ�ģ���
