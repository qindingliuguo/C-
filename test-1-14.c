//
// Created by 13129 on 2021/10/4.
//

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr1[20]={0};
//    char arr2[20]={0};
//    char arr3[20]={0};
//    int i=0;
//    printf("创建账号\n");
//    fflush(stdout);
//    scanf("%s",&arr3);
//
//    for ( i = 1; i < 3; i++)
//    {
//        printf("请输入密码：\n");
//        fflush(stdout);
//        scanf("%s",&arr1);
//        //fflush(stdout);
//        printf("确认密码\n");
//        fflush(stdout);
//        scanf("%s",&arr2);
//        if(strcmp(arr1,arr2)==0)
//        {
//            printf("创建成功\n");
//            break;
//        } else{
//            printf("密码错误，请重新输入\n");
//        }
//    }
//    if(i==3)
//    printf("创建失败");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};//创建数组
//    int k=7;//创建要被查找数
//
//    int sz= sizeof(arr)/sizeof (arr[0]);//算出元素个数
//    int left=0;//创建左下标
//    int right=sz-1;//创建右下标
//
//    while (left<=right)//左下标小于右下标时再进入循环，防止左右下标交错
//    {
//        int mid=(left+right)/2;//计算中间个数
//        if(arr[mid]>k)//若被查找数小于中间个数
//        {
//            right=mid-1;//就将右下标更换
//        }
//        else if(arr[mid]<k)//若是被查找数大于中间个数
//        {
//            left=mid+1;//将左下标更换
//        }
//        else//若查找数等与中间个数
//        {
//            printf("找到了，下标为%d\n",mid);
//            break;
//        }
//        if(left>right)
//        {
//            printf("找不到");
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main ()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int n=17;
//    int i;
//    int sz=sizeof(arr)/sizeof (arr[0]);
//    for ( i = 0; i < sz; i++)
//    {
//        if(n==arr[i])
//        {
//            printf("找到了，下标为：%d\n",i);
//            break;
//        }
//    }
//    if(i==sz)
//        printf("找不到");
//    return 0;
//}
//int main()
//{
//    for (int i = 1; i <= 10 ; i++)
//    {
//      if(i==5)
//          break;
//        printf("%d",i);
//    }
//    return 0;
//}
//{
    //printf("%d\n",strlen(arr));
//    for (int i = 0; i <= 10; i++)
//    {
//        printf("%d\n",i);
//    }
//    return 0;
//}
//int main ()
//{
//    int ch;
//    while ((ch=getchar()) != EOF)
//    {
//
//        if(ch<'0'||ch>'9')
//            continue;
//        putchar(ch);
//
//    }
//    return 0;
//}
//int main()
//{
//    int ret;
//    char pass[20]={0};
//    printf("密码");
//    fflush(stdout);
//    scanf("%s",pass);
//    getchar();
//    printf("请确认");
//    fflush(stdout);
//    ret=getchar();
//    if(ret=='y')
//    {
//        printf("hehe");
//    }
//    else
//    {
//        printf("haha");
//    }
//    return 0;
//}
//int main()
//{
//    int ch=0;
//    while ((ch=getchar())!=EOF)
//    {
//        fflush(stdout);
//        putchar(ch);
//        printf("\n");
//    }
//    return 0;
//}
//int main ()
//{
//    int i=1;
//    while (i<10)
//    {
//        printf("%d",i);
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int n=1;
//    int m=2;
//    switch (n)
//    {
//        case 1:m++;//m=2
//        case 2:n++;//n=2
//        case 3:
//            switch (n)
//            {
//                case 1:n++;
//                case 2:m++;n++;//m=3 n=3
//                    break;
//            }
//        case 4:m++;//m=4
//            break;
//        default:
//            break;
//    }
//    printf("%d%d",n,m);
//    return 0;
//}
//int main ()
//{
//    int a;
//    //scanf("%d",&a);
//    while (a<=100)
//    {
//        if(a%2==1)
//        {
//            printf("%d\n",a);
//        }
//        a++;
//    }
//
//}
//{
//    int a=0;
//    int b=2;
//    if(a==1)
//        if(b==2)
//            printf("haha\n");
//        else
//            printf("hehe");
//    return 0;
//}
//
//int main ()
//{
//    int a = 0;
//    printf("haha\n");
//    fflush(stdout);
//    scanf("%d",&a);
//    printf("%d",a);
//    return 0;
//}
//struct Book
//{
//    char name[20];
//    short price;
//};
////int main()
////{
//    struct Book b1={"C语言",55};
//    printf("%s\n",b1.name);
//    printf("%d\n",b1.price);
//    struct Book*pb=&b1;
//    printf("%s\n",(*pb).name);
//    printf("%d\n",pb->price);
//    strcpy(b1.name,"C++");
//     printf("%s\n",b1.name);
////    return 0;
//}
//int main()
//
//{
//    int a=10;
//    int*p=&a;
//    printf("%p\n",&a);
//    printf("%p\n",p);
//    char ch='w';
//    char* pc=&ch;
//
//    printf("%c\n",ch);
//    printf("%p\n",pc);
//    *pc='b';
//    printf("%c\n",ch);
//    printf("%d",sizeof (char*));
//    return 0;
//}

//{
//    int a=10;
//    printf("%d",a);
//    while (a<20)
//    {
//        printf("%d",a);
//        a++;
//    }
//void test()
//{
//    static int a=1;
//    a++;
//    printf("%d\n",a);
//}
//int main()
//{
//    int i=0;
//    while (i<5)
//    {
//        test();
//        i++;
//    }
//    typedef unsigned u_sd;
//    int a=0;
//    int b=~a;
//    u_sd c=20;
//    printf("%u",c);
//    printf("%d",b);
//    char ch;
//    ch=getchar();
//    ch+=4;
//    putchar(ch);
//    int a=1;
//    int b=0;
//    printf("%d\n",a);
//    printf("haha\n");
//    fflush(stdout);
//    scanf("%d",&b);
//    printf("%d\n",b);
//    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//    int i=0;
//    while (i<10)
//    {
//        printf("%d",arr1[i]);
//        i++;
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d",arr1[i]);
//    }
//
//    return 0;
//}
//int add(int x,int y)
//{
//    int z =x*y;
//    return z;
//}
//int main()
//{
//    int a=20;
//    int b=10;
//    int sum= add(a,b);
//    printf("%d",sum);

//    int a;
//    a=strlen("alsdh\tasd");
//    printf("%d",a);
//    return 0;
//    printf("%d\n",sizeof(char ));
//    printf("%d\n",sizeof(short ));
//    printf("%d\n",sizeof(int ));
//    printf("%d\n",sizeof(long ));
//    printf("%d\n",sizeof(long long ));
//    printf("%d\n",sizeof(float ));
//    printf("%d\n",sizeof(double ));
//    int mun=0;
//    int num=0;
//    scanf("%d%d",&mun,&num);
//    int sum=mun+num;
//    printf("%d",sum);
//    return 0;
//}
