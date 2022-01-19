//
// Created by 13129 on 2022/1/13.
//
#include <stdio.h>
//int main()
//{
//    int a=7%2;//商2余1
//    printf("%d\n",a);
//    return 0;
//}
//int main()
//{
//    int a=16;
//    // >>右移操作符
//    // 移动的是二进制位
//    //16==00000000000000000000000000010000
//    int b =  a >> 1;
//    //右移后变为8
//    printf("%d\n",b);
//    return 0;
//}
//int main()
//{
//    //加减法
//    int a=3;
//    int b=5;
//    printf("a=%d b=%d\n",a,b);
//    a=a+b;//a=8
//    b=a-b;//b=3
//    a=a-b;//a=5
//    printf("a=%d b=%d\n",a,b);
//
//    return 0;
//}
//int main()
//{
//    //异或法
//    int a=3;
//    int b=5;
//    printf("a=%d b=%d\n",a,b);
//    a=a^b;
//    b=a^b;
//    a=a^b;
//    printf("a=%d b=%d\n",a,b);
//
//    return 0;
//}
//int main()
//{
//    int num=0;
//    int count=0;
//    scanf("%d",&num);
//    while (num) {
//        if(num%2==1)
//            count++;
//        num=num/2;
//    }
//    printf("%d\n",count);
//    return 0;
//}
//int main()
//{
//    int num=0;
//    int count=0;
//    scanf("%d",&num);
//    for (int i = 0; i < 32; i++) {
//        if(1==((num>>i)&1))
//            count++;
//    }
//    printf("%d\n",count);
//    return 0;
//}
int main()
{
    int a=10;
    char c='r';
    char* p=&c;
    int arr[10]={0};
    printf("%d\n",sizeof (a));
    printf("%d\n",sizeof (c));
    printf("%d\n",sizeof (p));
    printf("%d\n",sizeof (arr));
    return 0;
}