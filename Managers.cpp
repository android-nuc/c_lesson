//参会人员管理系统
struct Person   //创建一个结构体
{
    char name[10];  //姓名
    char sex;   //性别
    int age;   //年龄
    int romm_num;   //房间号
};
#include<stdio.h>
#include<String.h>
#include<windows.h>
#define THENUMOFPERSON  59
int main()
{
    //---------------声明函数----------------
    int login(struct Person persons[],int theNumOfRegisted);     //输入函数
    //---------------初始化变量--------------
    struct Person persons[59];      //用于盛装从控制台输入的数据
    FILE *fpread;
    int theNumOfRegisted = 0;   //用于记录已经输入多少个
    struct Person *sp;
    //=======================================
    system("title Managers");   //修改标题
    printf("Welcome！\n");
    sp = persons;
    if((fpread = fopen("data","rb")) == NULL)   //没有data，创建一个data
    {
        printf("Success to create the data!\n");
        //------开始向文件里输入数据
        //输入参赛人员的信息
        theNumOfRegisted = login(sp,theNumOfRegisted);  //输入数据的函数
        printf("123\n");
    }
    else    //有data，判断data的内容
    {
        printf("check the data.....\n");
        //第一步  获取date里有多少结构体对象
        long sizeOfDate;  //用于记录文件大小
        fseek(fpread,0,SEEK_END);   // 将fp移到文件的最后位置
        sizeOfDate = ftell(fpread);     //获取fp所指向的文件中的读写位置
        theNumOfRegisted = sizeOfDate / sizeof(struct Person);      //获得date中结构体的数目
        if(theNumOfRegisted == 0)   //文件内没有结构体
        {
            printf("data中没有数据\n");
            theNumOfRegisted = login(sp,theNumOfRegisted);  //进行输入
        }
        else
        {
            printf("data中有%3d组数据.\n",theNumOfRegisted);
            fseek(fpread,0,SEEK_SET);   //将fp移到文件的开始位置
            //用结构体盛放date中的内容.
            int i;
            for (i = 0; i < theNumOfRegisted; i++)
            {
                fread(&persons[i],sizeof(struct Person),1,fpread);  //从文件中读取数据

            }


            fclose(fpread); //关闭文件
        }
    }
    int roomNumGroup[59];
    int i;
    for(i = 0; i < theNumOfRegisted; i++)
    {
        roomNumGroup[i] = persons[i].romm_num;  //将所有的房间号按顺序放入数组中
    }
    //进入主界面
    printf("|===================================================|\n");
    printf("|                                                   |\n");
    printf("|              欢迎进入Managers系统！！             |\n");
    printf("|                                                   |\n");
    printf("|         输入数字 1 — 5 进入打开相应的功能        |\n");
    printf("|                                                   |\n");
    printf("|                  1.信息登录功能#                  |\n");
    printf("|                  2.信息浏览功能#                  |\n");
    printf("|                  3.信息查询功能#                  |\n");
    printf("|                  4.排序信息功能#                  |\n");
    printf("|                  5.退出系统功能#                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|===================================================|\n");
    int signNum;   //用于记录输入的数字
    while(scanf("%d",&signNum) != EOF)
    {
        if(signNum == 1)    //信息登录功能
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
            printf("|        回复任意数字回到上一层菜单。     |\n");
            printf("|=========================================|\n");
            int mSignNum;
            scanf("%d",&mSignNum);
        }
        else if (signNum == 3)
        {
            printf("|=========================================|\n");
            printf("|    请输入对应的房间号查询相应的房间     |\n");
            printf("|=========================================|\n");
            int roomNum;
            while(scanf("%d",&roomNum) != EOF && roomNum != -1)
            {
                bool isExist = 0;   //判定这个房间有人
                for(i = 0; i < theNumOfRegisted; i++)
                {
                    if(roomNum == roomNumGroup[i])      //找到对应的房间号
                    {
                        printf("%3d里的客人的信息为：\n",roomNum);
                        printf("%s %c %d %d\n",persons[i].name,persons[i].sex,persons[i].age,persons[i].romm_num);
                        isExist = 1;
                    }
                }
                if(!isExist)      //这个房间里没人
                {
                    printf("%3d号房间没有客人入住。\n",roomNum);
                }
                printf("|=====================================|\n");
                printf("|                                     |\n");
                printf("|   继续输入想要了解的房间的序号，    |\n");
                printf("|   或者输入“-1 ”返回到上一层菜单 。 |\n");
                printf("|                                     |\n");
                printf("|=====================================|\n");
            }

        }
        else if (signNum == 4)  //将房间号排序输出
        {
            int i,j;
            struct Room
            {
                int room_num;   //房间号
                int sign_num;    //这个房间在persons结构体的序号
            };
            struct Room rooms[59];
            for (i = 0; i < theNumOfRegisted; i++)
            {
                rooms[i].room_num = persons[i].romm_num;
                rooms[i].sign_num = i;
            }
            //利用冒泡排序   由小到大
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
            printf("|                    谢谢您的使用！                 |\n");
            printf("|                                                   |\n");
            printf("|                                             ^_^   |\n");
            printf("|                                                   |\n");
            printf("|===================================================|\n");
            Sleep(3000);
            exit(0);

        }

        printf("|===================================================|\n");
        printf("|                                                   |\n");
        printf("|         输入数字 1 — 5 进入打开相应的功能        |\n");
        printf("|                                                   |\n");
        printf("|                  1.信息登录功能#                  |\n");
        printf("|                  2.信息浏览功能#                  |\n");
        printf("|                  3.信息查询功能#                  |\n");
        printf("|                  4.信息修改功能#                  |\n");
        printf("|                  5.退出系统功能#                  |\n");
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("|===================================================|\n");
    }

}
//===================函数部分======================
int login(struct Person persons[],int theNumOfRegisted)
{
    printf("目前还有房间数为:%2d。\n",THENUMOFPERSON - theNumOfRegisted);
    if (theNumOfRegisted == THENUMOFPERSON)  //房间已满
    {
        printf("房间已满，无法继续登录\n");
    }
    else
    {
        printf("请依次输入参会人员的姓名，性别，年龄，房间号\n");
        int i,j;
        FILE *fp;
        fp = fopen("data","ab");
        for(i = theNumOfRegisted; i < THENUMOFPERSON; i++)
        {
            bool isSame = 0;    //判断是否是重复的
            scanf("%s %c %d %d",persons[i].name,&persons[i].sex,&persons[i].age,&persons[i].romm_num);      //输入信息
            for(j = 0; j < i; j++)  //判断房间号重复的
            {
                if(persons[i].romm_num == persons[j].romm_num)   //如果房间号重复
                {
                    printf("这个房间已经有人入住，请再次选择！\n");
                    isSame = 1;
                }
            }
            if (isSame)
            {
                i--;
                continue;
            }
            if (fwrite(&persons[i],sizeof(struct Person),1,fp) != 1)    //向文件中输入数据
            {
                printf("file write error\n");
            }
            theNumOfRegisted++;     //已注册的房间++
            //printf("%s--%c--%d--%d\n",persons[i].name,persons[i].sex,persons[i].age,persons[i].romm_num);
            if (i == THENUMOFPERSON - 1)  //房间已满
            {
                printf("房间已满，无法继续登录\n");
                break;  //退出循环
            }
            else
            {
                printf("目前还有房间数为:%2d。\n",THENUMOFPERSON - theNumOfRegisted);   //提示还有多少个房间
                //是否继续输入
                int sign;   //标记数
                printf("是否继续登录？\n 回复 1 —— 是    回复 0 —— 否\n");
                scanf("%d",&sign);
                if (sign == 0)
                    break;  //退出循环
                else
                {
                    printf("请继续输入一位参会人员的姓名，性别，年龄，房间号：\n");
                }
            }
        }
        fclose(fp);

    }
    return (theNumOfRegisted);      //返回入住房间人员的数量
}




