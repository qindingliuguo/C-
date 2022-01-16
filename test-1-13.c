//
// Created by 13129 on 2021/9/29.
//
//#include <stdio.h>
//int main()
//{
//
//    for (int i = 100; i <=200 ; i++)
//    {
//        //素数只能被1或本身整除
//        int j;
//        for ( j = 2; j < i ; j++)
//        {
//            if(i%j==0)
//            {
//                break;
//            }
//        }
//        if(j==i)
//        {
//            printf("%d\n",i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i=1;
//    int c=0;
//    for (int yeer = 1000; yeer <= 2000 ; yeer++)
//    {
//       if(yeer%4==0 && yeer%100!=0)
//        {
//            printf("%dX%d\n",yeer,i);
//            i++;
//            c++;
//        }
//        else if(yeer%400==0)
//        {
//            printf("%dX%d\n",yeer,i);
//            i++;
//            c++;
//        }
//        if (((yeer%4==0)&&(yeer%100!=0))||(yeer%400==0))
//        {
//            printf("%d\n",yeer);
//            c++;
//        }
//
//    }
//    printf("%d",c);
//    return 0;
//}
//int main()
//{
//    int m=0;
//    int n=0;
//    int r=0;
//    scanf("%d%d",&m,&n);
//    while (m%n)
//    {
//        r=m%n;//r的值为m，n的模
//        m=n;//将n=18赋值给m
//        n=r;//再将r赋值给n，继续让m%n来自计算最大公因数
//    }
//    printf("%d\n",r);
//    return 0;
//}
//int main()
//{
//    for (int i = 0; i <100 ; i++)
//    {
//        if(i%3==0)//%为取模
//            printf("%d\n",i);
//
//    }
//    return 0;
//}
//int main()
//{
//    int a=0;
//    int b=0;//创建要按大小排序的对象
//    int c=0;
//    scanf("%d%d%d",&a,&b,&c);//输入要排序的值
//    if(a<b)//判断两个值的大小若b大于a就把两值互换
//    {
//        int tmp=a;//创建一个空变量将a的值放进去若直接交换那a的值会变为0
//        a=b;//此时a的值为零，将b的值赋予给a；b变为零
//        b=tmp;//再将tmp（a）的值赋给b
//    }
//    if(a<c)
//    {
//        int tmp=a;
//        a=c;
//        c=tmp;
//    }
//    if(b<c)
//    {
//        int tmp=b;
//        b=c;
//        c=tmp;
//    }
//    printf("%d %d %d",a,b,c);
//    return 0;
//}