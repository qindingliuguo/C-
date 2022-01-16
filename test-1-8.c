//
// Created by 13129 on 2021/9/19.
//

#include<stdio.h>
#include<string.h>
int main()
{
    int n=1;
    int m=2;
    switch (n)
    {
        case 1:
            m++;
        case 2:
            n++;
        case 3:
            switch (n)
            {
                case 1://n不等于1所以跳过case1执行case2
                    n++;
                case 2:
                    m++;
                    n++;
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("m=%d\nn=%d",m,n);//5,4//2,3
}
/*
int main()
{
    int day=0;
    int n=1;
    scanf("%d",&day);
    switch (day)//switch case语句switch(必须是整形表达式) case(整形常量表达式)
    {
        case 1:
            printf("星期一");
            break;//break跳出循环
        case 2://switch另一种高效写法
        case 3:
        if(1==n)//switch语句可以出现if语句
            printf("hehe");
        case 4:
        case 5:
            printf("工作日");
            break;
        case 6:
        case 7:
            printf("休息日");
            break;
        default://判别非法状态，判别switch语句能否匹配输入项
            printf("输入错误");
            break;
    }
    return 0;
}*/
