//
// Created by 13129 on 2021/9/19.
//
#include <stdio.h>
int main()
{
    int a=1;
    while (a<=100)
    {
        if(a%2==1)
            printf("%d\n",a);
        a++;

    }

   /* int a=0;
    scanf("%d",&a);
    int b=a%2;//取余数，若能被2整除那就是偶数，若不能则是奇数
    //printf("%d",b);
    if(1==b)
        printf("是奇数");
    else
        printf("不是奇数");
*/

    return 0;
}
/*int main()
{
    int num=4;
    //if(num=5)//一个=是赋值；两个==是判断相等
    if(5==num)//建议这样编代码在判断两个值相不相等时将常量放在前
    {
        printf("hehe");
    }

    return 0;
}*/
/*int main()
{
    int a=0;
    int b=2;
    if(a==1)

        if (b == 2)
            printf("hehe\n");
        else//else只会和离得最近的未匹配的if相匹配
            printf("haha\n");

    return 0;
}*/
