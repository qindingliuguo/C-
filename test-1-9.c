//
// Created by 13129 on 2021/9/20.
//
#include <stdio.h>
int main()
{
    int n=1;
    int m=2;
    switch (n)
    {
        case 1:
            m++;//1.3
        case 2://2.3
            n++;
        case 3:
            switch (n)//switch允许嵌套使用
            {
                case 1:
                    n++;
                case 2:
                    m++;//4
                    n++;//3
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("%d\n%d",n,m);
    return 0;
}
/*
int main()
{
    int a=0;
    printf("富婆不叼你怎么办？\n");
    printf("你只有两种选择\n");
    printf("1.干她 2.淦她 3.送她礼物\n");
    fflush(stdout);
    scanf("%d",&a);
    switch (a)//表达式必须要是整形
    {
        case 1://case后面的表达式必须是整形常量
            printf("你征服了富婆，现在富婆脑子里都是你");
            break;
        case 2:
            printf("你打了富婆两巴掌，富婆想把你送进了监狱\n你请来了罗翔\n罗翔说：富婆人人都爱，包括我\n富婆满心欢喜\n至此你们开始了快乐的三人行\n而可怜的张三替你进了监狱");
            break;
        case 3:
            printf("你买了仙女快乐棒送给了富婆，富婆彻底不要你了");
            break;
        default://default放在代码块的任何位置都可以，不会妨碍代码的运行
            printf("没得选了\n");
            printf("死吧");
    }
    return 0;
}
*/

/*int main()
{
    int a=0;
    while (a<=1000)
    {
        if(a%2!=0)
        printf("%d\n",a);
        a++;
    }
    return 0;
}*/
/*int a=20;
int main()
{
    int a=30;
    printf("%d",a);
    return 0;
}*/
/*
int main()
{
    int a=0;
    scanf("%d",&a);
    if(a%2!=0)
        printf("奇数");
    else
        printf("偶数");
    return 0;
}
*/
/*int main()
{
    int age=0;
    scanf("%d",&age);
   if(age<=18&&age>=10)
    {//if语句要操控多个值的话必须要加大括号使其成为代码块
        printf("未成年");
        printf("吴签i行为");
    }
    else if(age>=18&&age<=25)
        printf("青年");
    if(age==1)//age不为1，if判断为假，不运行if语句
        if(age==2)
            printf("hehe");
        else//else只会匹配最近的未匹配的if语句
            printf("haha");
    else
        printf("lele");

    return 0;
}*/
/*int main()
{
    //int ch=getchar();//接收一个字符类型的数据
    //putchar(ch);//输出字符类型的数据

   char a=0;
    while (a=getchar()!=EOF)
    {
        putchar(a);
        //break;
    }
    return 0;
}*/
/*
int main()
{
    int i=1;
    while (i<=10)
    {
        i++;
        if(i==5)
            continue;//终止本次循环，continue后方代码不再执行，直接跳转到while语句的判断部分
        printf("%d",i);

    }

    return 0;
}
*/



