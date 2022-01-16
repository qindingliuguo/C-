//
// Created by 13129 on 2021/10/24.
//
#include <stdio.h>
int MAX(int x,int y)
{
    int max=(x>y?x:y);
}

void Swap(int*pa ,int*pb)
{
    int tmp =*pa;
    *pa=*pb;
    *pb=tmp;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("%d%d\n",a,b);
    Swap(&a,&b);
    printf("%d%d\n",a,b);
    return 0;
}


//#include <string.h>
//#include <stdio.h>
//ret_type fun_name (para1,*)
//{
//    statement;
//}
//int main()
//{
//    char arr[]="hello world";
//    memset(arr,'*',5);
//    printf("%s\n",arr);
//    return 0;
//}
//int main()
//{
//    char arr1[5]="abc";
//    char arr2[7]="######";
//    strcpy(arr1,arr2);
//    printf("%s\n",arr1);
//    return 0;
//}