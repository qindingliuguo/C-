//
// Created by 13129 on 2021/11/15.
//
//#include <stdio.h>
//#include <string.h>
//int fib(int n)
//{
//    int a=1;
//    int b=1;
//    int c=1;
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
//    int n=0;
//    int ret=0;
//    scanf("%d",&n);
//    ret= fib(n);
//    printf("%d\n",ret);
//    return 0;
//}
//int  my_strlen(char * str)
//{
//    int count=0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int  my_strlen(int n)
//{
//    if(n<=1)
//        return  1;
//    else
//        return n* my_strlen(n-1);
//
//}
//int main()
//{
//    int n=0;
//    int len=0;
//    scanf("%d",&n);
//    len= my_strlen(n);
//    printf("%d\n",len);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[]="bit";
//    int len=strlen(arr);
//    printf("%d",len);
//    return 0;
//}
//#include <stdio.h>
//void print(int n)
//{
//    if(n>9)
//    {
//        print(n/10);
//    }
//    printf("%d ",n%10);
//}
//int main()
//{
//    unsigned int num=0;
//    scanf("%d",&num);
//    print(num);
//    return 0;
//}