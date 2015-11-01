//冒泡排序
#include <stdio.h>
int main() {
    void Sort(int Array[],int len);
    int index = 0;
    int Array[10];
    while(index < 10) { //输入十个数
        printf("NO.%d ",index);
        scanf("%d",&Array[index]);
        index++;
    }
    Sort(Array,10);
    index = 0;
    printf("冒泡排序（升序）\n");
    while(index < 10) { //输入十个数
        printf("NO.%d ",index);
        printf("%3d\n",Array[index]);
        index++;
    }
    return 0;
}
/**
*Array 需要排序的数组
*len 数组的长度
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
