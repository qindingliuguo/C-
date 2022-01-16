//
// Created by 13129 on 2021/9/19.
//

#include <stdio.h>

    //register int a=10;//register表示寄存器变量，表示建议把这个变量放入寄存器
    //int a=10;//int定义的变量是有符号的全称为signed int;
    //unsigned int b=20;//unsigned int表示无符号的
    //struct; //表示结构体关键字
    //union ;//表示联合体或者共用体
    //typedef unsigned u_int;//typedef表示类型重定义
    //unsigned a=10;
    //u_int b=20;//把unsigned重新定义为u_int
    // static //修饰局部变量，使其生命周期延长
    /*void text()
    {
        static int a=1;//被static赋值后会变成静态的局部变量
        a++;
        printf("a=%d\n",a);
    }
    int i=0;
    while (i<5)
    {
        text();
        i++;
    }
    return 0;*/
    //若用static修饰全局变量，则会改变该变量的作用域，让其只能在自己所在的源文件内部进行使用
    //extern //申明外部符号；
    //extern int g_ari;
    //printf("g_ari=%d",g_ari);
    //static修饰函数改变了函数的链接属性，正常的函数具有外部链接属性，让其只具备内部链接属性
    //#define定义标识符常量
    //#define MAX 100
    //int main()
    //{
    //   int a=MAX;
    //   printf("%d",a);
    //  return 0;
    //}
    //#define定义宏
    //#define MAX(x,y)(x>y?x:y)
    //int main()
    //{
    //    int a=10;
    //   int b=20;
    //    int max=MAX(a,b);
    //    printf("%d",max);
    //    return 0;
    //}
