#include <stdio.h>
int main() {
    int index = 10;
//    while (index > 0) {
//        printf("HH\n");
//        index--;
//    }
//    do {
//        printf("HH\n");
//        index--;
//    } while(index > 0);
    //����ѭ�������������
    //do while ��ִ�к��ж�
    //while ���ж� ��ִ��
    //do....while��һ��Ҫ��һ���ֺ�
    //for(,,)for����������ű���Ҫ�������ֺ� �Ƽ����ʹ�ù淶��ʽ   �� for(i = 0;i < 10;i++) {}
    //�ڽ���ÿһ��ѭ��֮ǰ����Ҫ�ж��Ƿ���Խ���ѭ�������� do ... while �ĵ�һ��ѭ��s��
    /*int i = 0;
    for (;i < 100;i++) {
        if (i == 67) {
            //continue;   //������ǰѭ��
            //break;  //ֱ������ѭ��
        }
        printf("%d\n",i);
    }*/
    /**100���� �����е�5�ı��������
    */
    int n = 0;
    for(n = 0; n < 100; n++) {
        if(n % 5 == 0) {
            printf("%d\n", n);
        }
    }
    return 0;
}



