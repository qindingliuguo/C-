//
// Created by 13129 on 2021/9/19.
//

#include <stdio.h>
#include <string.h>
//struct //结构体关键字
struct Book//用struct结构体关键字来创建一本书
{
    char name[25];//定义书名
    int price;//定义价格
};
int main()
{
    struct Book b1={"新职富婆通讯录",4600};
    struct Book*pb=&b1;//利用指针变量来对结构体进行操作
    //strcpy表示为字符串拷贝使用时要用到库函数string.h
    strcpy(b1.name,"C++");//要对结构体内部数组成员修改时可以使用strcpy
    printf("%s\n",b1.name);
    //printf("%s\n",pb->name);//箭头操作符->，结构体指针指向对象
    //printf("%s\n",(*pb).name);//利用指针变量来输出结构体内容
    //printf("%d\n",(*pb).price);
    //printf("书名：%s\n",b1.name);//可以用.操作符访问结构体变量找到成员
    //printf("价格：%d\n",b1.price);
    return 0;
}