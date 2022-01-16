//
// Created by 13129 on 2021/9/18.
//
#include <stdio.h>
int Add(int x ,int y)//自定义函数
{
    int z=x+y;
    return z;

}
int main()
{
    int num1=10;
    int num2=20;
    int sum=0;
    int a=100;
    int b=200;
    sum= Add(a,b);
    sum= Add(num1,num2);
    printf("%d",sum);


    return 0;
}