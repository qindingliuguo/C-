//
// Created by 13129 on 2021/9/21.
//
#include <stdio.h>

//int main()
//{
//    int i=0;
//    int k=0;
//    for (i=0,k=0;k=0;i++,k++)//k=0是将0赋值给了k；0为假，不进入循环
//        k++;
//    return 0;
//}

//int main()
//{
//    int x,y;
//    for (x=0,y=0;x<2&&y<5;++x,y++)
//    {
//        printf("haha\n");
//    }
//
//    return 0;
//}
/*int main()
{
    int i=0;
    int j=0;

    //for (i=0; i < 10; i++)
    for (; i < 10; i++)//for循环的初始化体被省略掉的话在，进行循环时将不会对变量进行初始化，
                       //从而导致for在循环时i自增后将不会被初始化
                       //for循环体的每个结构体都有意义建议不要随便省略掉
    {
        for (; j < 10; j++)
        {
            printf("hehe\n");
        }
    }
    return 0;
}*/
/*int main()
{
    for (;;)//for循环的初始化，判断，调整都可以省略
            //但是；for循环的判断部分如果被省略那么判断条件就恒为真，也就是默认为真
            //建议不要随便省略
    return 0;
}*/
/*int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    for (int i = 0; i < 10; i++)//建议前闭后开写法，合理运用
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}*/
/*int main()
{
    int i=0;
    for ( i = 0; i <10 ; i++)
    {
        if(i=5)//将5赋予给了i，在for循环体内该改变了循环变量
            //在循环体内不可调整循环变量，否则会导致循环不可控
            printf("haha\n");
        printf("hehe\n");
    }
    return 0;
}*/
/*int main()
{
    int i=0;
    for(i=1; i<=10; i++)//for循环的基本架构for(exp1/初始化/;exp2/判断部分/;exp3/调整部分/)
    {
        if(i==5)
            continue;//跳过本次循环continue后面的代码转到for循环的调整部分/
            // break;//跳出循环，和while循环一致
        printf("%d",i);
    }
    return 0;
}*/
/*int main()
{
    int ch=0;
    while ((ch=getchar())!=EOF)
    {
        if(ch<'0'||ch>'9')
            continue;
        putchar(ch);
        fflush(stdout);
    }
    return 0;
}*/
/*int main()
{
    int ret=0;
    int ch=0;
    char password[20]={0};
    printf("输入密码\n");
    fflush(stdout);
    scanf("%s",password);
    while ((ch=getchar())!='\n')
    {
        ;//空循环值
    }
    printf("确认密码");
    fflush(stdout);
    //getchar();
    ret=getchar();
    if(ret=='y')
    {
        printf("确认\n");
    }
    else
    {
        printf("返回\n");
    }

    return 0;
}*/
/*int main()
{
    int ch=0;
    while ((ch=getchar())!=EOF)//EOF本质是-1
    {
        fflush(stdout);
        putchar(ch);
    }
    //int ch=getchar();
    //    putchar(ch);
    //printf("%c",ch);
    return 0;

}*/
/*
int main()
{
    int i=1;
    while (i<=10)
    {
        if(i == 5)
            continue;//终止本次循环continue后方的代码，直接转跳到while判断部分进行下次循环
        //   break;//停止循环，跳出循环，永久终止循环
        printf("%d",i);
        fflush(stdout);
        i++;
    }
    return 0;
}*/
