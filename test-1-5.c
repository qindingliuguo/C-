//
// Created by 13129 on 2021/9/19.
//
#include <stdio.h>
int main()
{
    printf("%d\n",sizeof (char*));//指针的大小是由系统决定的；32为是4个字节；64位是8个字节
    return 0;
}
/*int main()
{
    char pc='w';
    char*ph=&pc;//指针的类型是根据所指对象的类型而改变的
    *ph='a';
    printf("%c",pc);
    return 0;
}*/
/*
int main()
{
    int a=10;//4个字节
    int*p=&a;//有一种变量是用来存放地址的这种变量叫指针变量类型为int*
    //printf("%p\n",p);
    //printf("%p",&a);
    *p=20;//*代表解引用操作符，*p是对p进行解引用操作，找到他所指的对象
    printf("%d",a);
    return 0;
}
*/
