//
// Created by 13129 on 2021/11/21.
//
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[]={"abc"};
    char arr1[]={'a','b','c'};
    printf("%d\n",sizeof (arr));
    printf("%d\n",sizeof (arr1));
    printf("%d\n",strlen(arr));
    printf("%d\n",strlen(arr1));
    return 0;
}
//#include <stdio.h>
//#include <string.h>
//int main ()
//{
//    int arr[10]={1,2,3};
//
//    char arr1[10]={'a',98};
//
//    char arr2[5]={"abc"};
//    printf("%d",arr);
//    printf("%d",arr1);
//    printf("%c",arr2);
//
//    char arr3[]={"abcdef"};
//    printf("%d\n",sizeof (arr3));
//    printf("%d\n",strlen (arr3));
//    return 0;
//}
