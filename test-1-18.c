//
// Created by 13129 on 2021/10/30.
//
#include <stdio.h>
void Add(int*p)
{
    (*p)++;
}
int main ()
{
    int num=0;
    Add(&num);
    printf("%d\n",num);
}
//#include <stdio.h>
//int binary_search(int arr[],int k,int sz)
//{
//
//    int left=0;
//    int right=sz-1;
//
//
//    while (left<=right)
//    {
//        int mid=(left+right)/2;
//        if(arr[mid]<k)
//        {
//            left=mid+1;
//        }
//        else if(arr[mid]>k)
//        {
//            right=mid-1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int k=7;
//    int sz=sizeof (arr)/ sizeof(arr[0]);
//
//    int ret=binary_search(arr,k,sz);
//    if(ret==-1)
//    {
//        printf("找不到");
//    }
//    else
//    {
//        printf("找到了，下标为:%d\n",ret);
//    }
//    return 0;
//}
//#include <stdio.h>
//int is_leap_year(int y)
//{
//    if((y%4==0&&y%100!=1)||(y%400==0))
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int year=0;
//    for (year = 1000; year <= 2000; year++)
//    {
//       if(is_leap_year(year)==1)
//       {
//           printf("%d\n",year);
//       }
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
//    for (int i = 100; i <= 200 ; i++)
//    {
//        if(is_prime(i)==1)
//            printf("%d\n",i);
//    }
//    return 0;
//}
