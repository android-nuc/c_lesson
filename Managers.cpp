//�λ���Ա����ϵͳ
struct Person   //����һ���ṹ��
{
    char name[10];  //����
    char sex;   //�Ա�
    int age;   //����
    int romm_num;   //�����
};
#include<stdio.h>
#include<String.h>
#include<windows.h>
#define THENUMOFPERSON  59
int main()
{
    //---------------��������----------------
    int login(struct Person persons[],int theNumOfRegisted);     //���뺯��
    //---------------��ʼ������--------------
    struct Person persons[59];      //����ʢװ�ӿ���̨���������
    FILE *fpread;
    int theNumOfRegisted = 0;   //���ڼ�¼�Ѿ�������ٸ�
    struct Person *sp;
    //=======================================
    system("title Managers");   //�޸ı���
    printf("Welcome��\n");
    sp = persons;
    if((fpread = fopen("data","rb")) == NULL)   //û��data������һ��data
    {
        printf("Success to create the data!\n");
        //------��ʼ���ļ�����������
        //���������Ա����Ϣ
        theNumOfRegisted = login(sp,theNumOfRegisted);  //�������ݵĺ���
        printf("123\n");
    }
    else    //��data���ж�data������
    {
        printf("check the data.....\n");
        //��һ��  ��ȡdate���ж��ٽṹ�����
        long sizeOfDate;  //���ڼ�¼�ļ���С
        fseek(fpread,0,SEEK_END);   // ��fp�Ƶ��ļ������λ��
        sizeOfDate = ftell(fpread);     //��ȡfp��ָ����ļ��еĶ�дλ��
        theNumOfRegisted = sizeOfDate / sizeof(struct Person);      //���date�нṹ�����Ŀ
        if(theNumOfRegisted == 0)   //�ļ���û�нṹ��
        {
            printf("data��û������\n");
            theNumOfRegisted = login(sp,theNumOfRegisted);  //��������
        }
        else
        {
            printf("data����%3d������.\n",theNumOfRegisted);
            fseek(fpread,0,SEEK_SET);   //��fp�Ƶ��ļ��Ŀ�ʼλ��
            //�ýṹ��ʢ��date�е�����.
            int i;
            for (i = 0; i < theNumOfRegisted; i++)
            {
                fread(&persons[i],sizeof(struct Person),1,fpread);  //���ļ��ж�ȡ����

            }


            fclose(fpread); //�ر��ļ�
        }
    }
    int roomNumGroup[59];
    int i;
    for(i = 0; i < theNumOfRegisted; i++)
    {
        roomNumGroup[i] = persons[i].romm_num;  //�����еķ���Ű�˳�����������
    }
    //����������
    printf("|===================================================|\n");
    printf("|                                                   |\n");
    printf("|              ��ӭ����Managersϵͳ����             |\n");
    printf("|                                                   |\n");
    printf("|         �������� 1 �� 5 �������Ӧ�Ĺ���        |\n");
    printf("|                                                   |\n");
    printf("|                  1.��Ϣ��¼����#                  |\n");
    printf("|                  2.��Ϣ�������#                  |\n");
    printf("|                  3.��Ϣ��ѯ����#                  |\n");
    printf("|                  4.������Ϣ����#                  |\n");
    printf("|                  5.�˳�ϵͳ����#                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|===================================================|\n");
    int signNum;   //���ڼ�¼���������
    while(scanf("%d",&signNum) != EOF)
    {
        if(signNum == 1)    //��Ϣ��¼����
        {
            theNumOfRegisted = login(sp,theNumOfRegisted);
        }
        else if (signNum == 2)
        {
            int i;
            for (i = 0; i < theNumOfRegisted; i++)
            {
                printf("%s--%c--%d--%d\n",persons[i].name,persons[i].sex,persons[i].age,persons[i].romm_num);
            }
            printf("|=========================================|\n");
            printf("|        �ظ��������ֻص���һ��˵���     |\n");
            printf("|=========================================|\n");
            int mSignNum;
            scanf("%d",&mSignNum);
        }
        else if (signNum == 3)
        {
            printf("|=========================================|\n");
            printf("|    �������Ӧ�ķ���Ų�ѯ��Ӧ�ķ���     |\n");
            printf("|=========================================|\n");
            int roomNum;
            while(scanf("%d",&roomNum) != EOF && roomNum != -1)
            {
                bool isExist = 0;   //�ж������������
                for(i = 0; i < theNumOfRegisted; i++)
                {
                    if(roomNum == roomNumGroup[i])      //�ҵ���Ӧ�ķ����
                    {
                        printf("%3d��Ŀ��˵���ϢΪ��\n",roomNum);
                        printf("%s %c %d %d\n",persons[i].name,persons[i].sex,persons[i].age,persons[i].romm_num);
                        isExist = 1;
                    }
                }
                if(!isExist)      //���������û��
                {
                    printf("%3d�ŷ���û�п�����ס��\n",roomNum);
                }
                printf("|=====================================|\n");
                printf("|                                     |\n");
                printf("|   ����������Ҫ�˽�ķ������ţ�    |\n");
                printf("|   �������롰-1 �����ص���һ��˵� �� |\n");
                printf("|                                     |\n");
                printf("|=====================================|\n");
            }

        }
        else if (signNum == 4)  //��������������
        {
            int i,j;
            struct Room
            {
                int room_num;   //�����
                int sign_num;    //���������persons�ṹ������
            };
            struct Room rooms[59];
            for (i = 0; i < theNumOfRegisted; i++)
            {
                rooms[i].room_num = persons[i].romm_num;
                rooms[i].sign_num = i;
            }
            //����ð������   ��С����
            for(i = 0; i < theNumOfRegisted - 1; i++)
            {
                for(j = 0; j < theNumOfRegisted - 1 - i; j++)
                {
                    if (rooms[j].room_num > rooms[j + 1].room_num)
                    {
                        struct Room temp = rooms[j];
                        rooms[j] = rooms[j + 1];
                        rooms[j + 1] = temp;
                    }
                }
            }
            for(i = 0; i < theNumOfRegisted; i++)
            {
                printf("%s %c %d %d\n",persons[rooms[i].sign_num].name,persons[rooms[i].sign_num].sex,persons[rooms[i].sign_num].age,persons[rooms[i].sign_num].romm_num);
            }
        }
        else if (signNum == 5)
        {

            printf("|===================================================|\n");
            printf("|                                                   |\n");
            printf("|                                                   |\n");
            printf("|                    лл����ʹ�ã�                 |\n");
            printf("|                                                   |\n");
            printf("|                                             ^_^   |\n");
            printf("|                                                   |\n");
            printf("|===================================================|\n");
            Sleep(3000);
            exit(0);

        }

        printf("|===================================================|\n");
        printf("|                                                   |\n");
        printf("|         �������� 1 �� 5 �������Ӧ�Ĺ���        |\n");
        printf("|                                                   |\n");
        printf("|                  1.��Ϣ��¼����#                  |\n");
        printf("|                  2.��Ϣ�������#                  |\n");
        printf("|                  3.��Ϣ��ѯ����#                  |\n");
        printf("|                  4.��Ϣ�޸Ĺ���#                  |\n");
        printf("|                  5.�˳�ϵͳ����#                  |\n");
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("|===================================================|\n");
    }

}
//===================��������======================
int login(struct Person persons[],int theNumOfRegisted)
{
    printf("Ŀǰ���з�����Ϊ:%2d��\n",THENUMOFPERSON - theNumOfRegisted);
    if (theNumOfRegisted == THENUMOFPERSON)  //��������
    {
        printf("�����������޷�������¼\n");
    }
    else
    {
        printf("����������λ���Ա���������Ա����䣬�����\n");
        int i,j;
        FILE *fp;
        fp = fopen("data","ab");
        for(i = theNumOfRegisted; i < THENUMOFPERSON; i++)
        {
            bool isSame = 0;    //�ж��Ƿ����ظ���
            scanf("%s %c %d %d",persons[i].name,&persons[i].sex,&persons[i].age,&persons[i].romm_num);      //������Ϣ
            for(j = 0; j < i; j++)  //�жϷ�����ظ���
            {
                if(persons[i].romm_num == persons[j].romm_num)   //���������ظ�
                {
                    printf("��������Ѿ�������ס�����ٴ�ѡ��\n");
                    isSame = 1;
                }
            }
            if (isSame)
            {
                i--;
                continue;
            }
            if (fwrite(&persons[i],sizeof(struct Person),1,fp) != 1)    //���ļ�����������
            {
                printf("file write error\n");
            }
            theNumOfRegisted++;     //��ע��ķ���++
            //printf("%s--%c--%d--%d\n",persons[i].name,persons[i].sex,persons[i].age,persons[i].romm_num);
            if (i == THENUMOFPERSON - 1)  //��������
            {
                printf("�����������޷�������¼\n");
                break;  //�˳�ѭ��
            }
            else
            {
                printf("Ŀǰ���з�����Ϊ:%2d��\n",THENUMOFPERSON - theNumOfRegisted);   //��ʾ���ж��ٸ�����
                //�Ƿ��������
                int sign;   //�����
                printf("�Ƿ������¼��\n �ظ� 1 ���� ��    �ظ� 0 ���� ��\n");
                scanf("%d",&sign);
                if (sign == 0)
                    break;  //�˳�ѭ��
                else
                {
                    printf("���������һλ�λ���Ա���������Ա����䣬����ţ�\n");
                }
            }
        }
        fclose(fp);

    }
    return (theNumOfRegisted);      //������ס������Ա������
}




