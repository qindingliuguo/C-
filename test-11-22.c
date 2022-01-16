//
// Created by 13129 on 2021/11/2#in
//
#include <stdio.h>
int main ()
{
    float sum;
    printf("项目 分数1 分数2 分数3 分数4 分数5  平均分\n");

    int arr[2][5]={{86,100,75,88,65},{78,90,99,78,100}};
    for (int i = 0; i < 2; i++) {
        if(i==0)
            printf("数学  ");
        else
            printf("英语  ");
        for (int j = 0; j < 5; j++) {
            printf("%d   ",arr[i][j]);
            sum=sum+arr[i][j];
        }
        sum/=5;
        printf("%.2f",sum);
        sum=0;
        printf("\n");
    }
}
//#include<stdio.h>
//int main()
//{
//   int arr[40]={1,1};
//   int i;
//    for (i = 2; i < 40; i++) {
//        arr[i]=arr[i-1]+arr[i-2];
//
//    }
//    for (i = 0; i < 40; i++) {
//        printf("%11d",arr[i]);
//        if(i%4==0)
//            printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int is_prime(int n)
//{
//    for (int j=2; j<n; j++)
//    {
//        if(n%j == 0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int a=0;
//    for (int i = 100 ; i <= 200 ; i++)
//    {
//        if(is_prime(i)==1)
//        {
//            printf("%d  ",i);
//            a++;
//            if(a%5==0){
//                printf("\n");
//            }
//        }
//
//    }
//    return 0;
//}

//#include <stdio.h>
//int is_prime(int n)
//{
//    for (int j=2; j<n; j++)
//    {
//        if(n%j == 0)
//            return 0;
//    }
//    return n;
//}
//int main()
//{
//    int n=0,i=0;
//    scanf("%d",&n);
//    i= is_prime(n);
//    if (i!=0)
//    {
//        printf("是素数");
//    } else {
//        printf("不是素数");
//    }
//    return 0;
//}

//#include <stdio.h>
//int fib(int n)
//{
//    int a,b,c;
//    a=1;
//    b=1;
//    c=0;
//    while (n>2)
//    {
//        c=a+b;
//        a=b;
//        b=c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n,ret;
//    n=0;
//    ret=0;
//    scanf("%d",&n);
//    ret = fib(n);
//    printf("%d\n",ret);
//}
//#include <stdio.h>
//int main()
//{
//    int i;
//    printf("输入数:");
//    fflush(stdout);
//    scanf("%d",&i);
//    printf("%d\n",i);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    float s=1, PI,i,t=1;
//    for (i = 3; 1.0/i >= 1.0/1000000 ; i+=2) {
//        s-=1/i*t;
//        t=-t;
//    }
//    PI=s*4;
//    printf("%.5lf\n",PI);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n=0;
//    for (int i = 100; i <= 200 ; i++) {
//        if(i%3!=0)
//        {
//            printf("%4d",i);
//            n++;
//            if(n==10)
//            {
//                printf("\n");
//                n=0;
//            }
//        } else {
//            continue;
//        }
//
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int a=0,s,i,p;
//    for ( i = 0; i < 1000; i++) {
//
//        printf("输入捐款金额：");
//        fflush(stdout);
//        scanf("%d",&a);
//        s=s+a;
//        if(s==100000){
//            break;
//        }
//
//    }
//    printf("捐款人数为%d\n",i);
//    printf("平均每人捐款为：%d \n",p=s/i);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    for (int i = 0; i < 100; i++) {
//        for (int j = 0; j < 100; j++) {
//            for (int k = 0; k < 100; k++) {
//                if(i*5+j*3+k/3==100 && k%3==0 && i+j+k==100) {
//                    printf("母鸡 %d 只，公鸡 %d 只，小鸡 %d 只\n",i,j,k);
//                }
//            }
//        }
//
//    }
//
//    return 0;
//}

//int main()
//{
//    int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
//    for (int i = 0; i < 3 ; i++)
//    {
//        for (int j = 0; j < 5 ; j++)
//        {
//            printf("&arr[%d][%d]=%p\n ",i,j,arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char arr[]={"asdasd"};
//    int sz=sizeof (arr)/sizeof (arr[0]);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("arr[%d]=%p\n",i,&arr);
//    }
//    return 0;
//}
