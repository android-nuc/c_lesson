#include<stdio.h>
//���õݹ�ʵ�ֵ�  ���ֲ��ҷ�
int main() {
    //��������
    int BinSearch(int Array[],int low,int high,int key);
    int Array[] = {22,25,33,36,39,48,49,57,63,73,82,91,100};
    printf("%d\n",BinSearch(Array,0,12,37));
    return 0;
}
/**
*Array ��Ҫ���ҵ�����
*key Ҫ���ҵ�������
*���� -1 û�������
*���� ���� key��Array�е����
*/
int BinSearch(int Array[],int low,int high,int key) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (key == Array[mid]) {
            return mid;
        } else if (key < Array[mid]) {
            return BinSearch(Array,low,mid - 1,key);
        } else if (key > Array[mid]) {
            return BinSearch(Array,mid + 1,high,key);
        }
    } else {
        return -1;
    }
}

