//
// Created by 13129 on 2022/1/12.
//
#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
    for (int i = 0; i < sz-1; i++) {  //定义冒泡函数要跑几趟
        int flag=1;         //创建一个临时变量来假设数组是否已经有序
        for (int j = 0; j < sz-1-i; j++) {  //定义每趟的要比较的对数，每跑一趟对数比上一趟少一对
            if(arr [j] > arr [j+1]){   //判断当前数是否比当前数后位的数大
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;     //若不完全有序则继续排序
            }
        }
        if(flag==1){
            break;
        }
    }
}
int main()
{
    int sz;
    //对arr排序，排为升序
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    //在主函数中将元素个数计算好
    sz=sizeof arr/sizeof arr[0];
    bubble_sort(arr,sz);
    for (int i = 0; i < sz; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}

