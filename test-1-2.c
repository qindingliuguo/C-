//
// Created by 13129 on 2021/9/18.
//
#include <stdio.h>
#include <string.h>
int main()
{
    int line=0;
    printf("加入新职\n");
    while (line<=20000)
    {
        printf("敲一行代码%d\n",line);
        line++;
    }
    if(line>20000)
        printf("好工作\n");
    printf("被开除\n");
    printf("遇到慧子，爱上慧子，被慧子包养\n");
    printf("圆满度过余生，衣食无忧\n");
    printf("由此可见搓两万行代码找工作，都不如富婆对你的回眸一笑");

    return 0;
}


/*
int main()
{
    int input=0;
    printf("进入新职\n");
    printf("你要好好学习嘛?\n");
    fflush(stdout);
    scanf("%d",&input);
    if(input==1)
        printf("我是傻逼，因为我选择了新职，所以我是傻逼");
    else
        printf("回家重修，上好学校");

    return 0;

}
*/
