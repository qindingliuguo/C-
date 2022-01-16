//
// Created by 13129 on 2021/11/15.
//
#include <stdio.h>
int main()
{
    int i=0,sum=0;
    do
    {
        if(i%2!=0)
        {
            sum=sum+i;
            printf("%d\n",sum);
        }
        i++;
    } while (i<200);

    return 0;
}
//#include <stdio.h>
//int main()
//{
//    int m;
//    for (int i = 100; i <= 300 ; i++)
//    {
//        if(i%3==0)
//        {
//            printf("%d ",i);
//            m++;
//            if(m%10==0)
//            {
//                printf("\n");
//            }
//        }
//
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int sum;
//    for (int i = 100; i <= 200 ; i++)
//    {
//        if(i%2==0)
//        {
//            sum=sum+i;
//        }
//    }
//    printf("%d\n",sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int sum;
//    for (int i = 1; i <= 100; i++)
//    {
//        sum=sum+i;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

