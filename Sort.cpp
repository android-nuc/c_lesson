//ð������
#include <stdio.h>
int main() {
    void Sort(int Array[],int len);
    int index = 0;
    int Array[10];
    while(index < 10) { //����ʮ����
        printf("NO.%d ",index);
        scanf("%d",&Array[index]);
        index++;
    }
    Sort(Array,10);
    index = 0;
    printf("ð����������\n");
    while(index < 10) { //����ʮ����
        printf("NO.%d ",index);
        printf("%3d\n",Array[index]);
        index++;
    }
    return 0;
}
/**
*Array ��Ҫ���������
*len ����ĳ���
*/
void Sort(int Array[],int len) {
    int i,j;
    for (i = 0;i < len;i++) {
        for (j = i + 1;j < len;j++) {
            if (Array[i] > Array[j]) {
                int temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }

}
