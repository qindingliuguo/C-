//
// Created by 13129 on 2021/9/27.
//
#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char pass[20]={0};//定义存放密码的数组
    for ( i = 0; i < 3; i++)//定义循环，最大只循环三次
    {
        printf("请输入密码\n");
        fflush(stdout);
        scanf("%s",pass);//读取输入的数字
        if (strcmp(pass,"123456")==0)//==不能用来判断两个字符串是否相等；应该使用一个库函数-strcmp；
        {
            printf("登录成功");
            break;
        }
        else
        {
            printf("登陆失败\n");
        }
    }
    if(i==3)
    {
        printf("错误三次");
    }
    return 0;
}
//int main()
//{
//    char arr1[]="welcome to xinzhi!!";
//    char arr2[]="                   ";
//    int left=0;
//    //int right=sizeof (arr1)/sizeof (arr1[0])-2;//-2代表的是char类型的数组最后一个元素的下标
//    int right= strlen(arr1)-1;//strlen是计算数组个数的不会加上/0所以减一就好
//    while (left<=right)//定义进入循环的条件
//    {
//        arr2[left] = arr1[left];//将1号数组的最左下标的元素赋值给2号数组的最左下标的元素
//        arr2[right] = arr1[right];//将1号数组的最右下标的元素赋值给2号数组的最右下标的元素
//        printf("%s\n", arr2);
//        fflush(stdout);
//        Sleep(1000);//定义每输出一次等待1000毫秒
//        fflush(stdout);
//       // system("cls");//system执行系统命令；cls清空屏幕
//        left++;//赋值过后左下标自增一就会做到顺序赋值
//        right--;//赋值过后右下表自减1
//    }
//    return 0;
//}
//int main()//折半查找算法；二分法
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};//定义数组
//    int k=7;//定义要查找的变量
//    int sz=sizeof (arr)/sizeof (arr[0]);//计算数组大小
//    int left=0;//左下标从0开始
//    int right=sz-1;//右下标是数组个数-1
//    while (left<=right)//使用while来定义查找，只有左下标比右下标小时才开始进行查找，以防左右下标交错产生死循环；
//    {
//        int mid=(left+right)/2;//算出下标的平均值；
//        if(arr[mid]>k)//使用if语句判断平均值是否大于被找数
//        {
//            right=mid-1;//如果大于就重新定义右下标
//        }
//        else if(arr[mid]<k)//判断是否小于被查找数
//        {
//            left=mid+1;//若小于就重新定义左下标
//        }
//        else
//        {
//            printf("找到了，下标为；%d",mid);
//            break;
//        }
//
//    }
//    if(left>right)
//    {
//        printf("找不到");
//    }
//    return 0;
//}
//int main()//在数组里面找到一个数字
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};//定义数组
//    int k=7;//定义要找到的数字把这个数字放到自定义的常量里
//    int i=0;//定义循环量
//    int sz=sizeof (arr)/sizeof (arr[0]);//计算数组的大小
//    for (int i = 0; i < sz; i++)//定义循环
//    {
//        if(k==arr[i])//定义if语句如果k=arr【i】就执行下行代码
//        {
//            printf("hehe");
//            break;
//        }
//    }
//    return 0;
//}
//int main()//优化的求乘阶和的代码
//{
//    int i;
//    double red=1;
//    double sum=0;
//    for (int i = 1; i <= 3; i++)
//    {
//        red=red*i;
//        printf("%d!=%.2lf\n",i,red);
//        sum=sum+red;
//        printf("%lf\n",sum);
//    }
//
//
//    return 0;
//}

//int main()//计算阶乘相加
//{
//    int i,n;
//    double red=1;//阶乘的位置
//    double sum=0;//阶乘和的位置
//    for (int n = 1; n <= 3 ; n++)//定义循环每循环一次n都加一
//    {
//        red=1;//每次循环完之后都要重新定义red的值否则的话上次循环乘阶的值会保留在red里
//        for (int i = 1; i <=n ; i++)//定义乘阶循环
//        {
//            red=red*i;//每次相乘后的值放在red里以达到1*2*3*n的效果
//        }
//        sum=sum+red;//每次循环后乘阶的值会放在red里和sum相加将值赋予给sum以达到可以将每次乘阶的值相加
//    }
//    printf("%lf\n",sum);//输出sum的值
//    return 0;
//}
//int main()//计算n的乘阶
//{
//    int n,i;//创建变量
//    double red=1;
//    double sum=0;
//    scanf("%d",&n);//输入要被乘阶的数
//    for ( i = 1; i<=n ;i++)
//    {
//        red = red * i;//用red和i相乘并且用red接收结果以达到1*2*3*4的效果
//    }
//    printf("%d!=%lf\n", n, red);
//    return 0;
//}
//int main()
//{
//    int i=1;
//    do
//    {
//        fflush(stdout);
//        if(i==5)
//            continue;
//        printf("%d\n",i);
//        i++;
//    }
//    while (i<=10);//do while循环，先进行循环在进行判断，do while循环至少循环一次
//    return 0;
//}
//int main()
//{
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i=10;
//    int a=2;
//    int c=i*a;
//    printf("我是傻逼");
//}
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    printf("%d",arr[4]);
//    return 0;
//}
//int main()
//{
//    for (int i = 0; i <=10; i++)
//    {
//        if(5==i)
//            continue;
//            printf("%d",i);
//    }
//    return 0;
//}