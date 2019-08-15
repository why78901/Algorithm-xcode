//
//  HeapSort.cpp
//  algorithm
//
//  Created by zhenfengwang on 2019/8/15.
//  Copyright © 2019 王振丰. All rights reserved.
//

#include "HeapSort.hpp"
HeadSort::HeadSort()
:adjustNum(0)
{
}
//第一步构建大顶堆将最大的元素调整到堆顶
//第二步将最大的堆顶元素放到未排序的末尾，重复步骤一
void HeadSort::Sort()
{
    int arr[10] = {1,5,2,86,432,53,26,53,23,42};
    int len = sizeof(arr)/sizeof(int);
    //构建大顶堆
    for (int i= len/2 -1; i>=0; i--) {
        adjustHeap(arr, i, len);
    }
    for(int i=len-1;i>0;i--){
        swap(arr, 0, i);
        adjustHeap(arr, 0, i);
    }
    printf("\n HeadSort \n");
    for (int i=0; i<len; i++) {
        printf("%d ",arr[i]);
    }
    printf("adjustNum%d",adjustNum);
    printf("\n");
}

void HeadSort::swap(int arr[],int fristIndex,int lastIndex){
    int temp = arr[fristIndex];
    arr[fristIndex] = arr[lastIndex];
    arr[lastIndex] = temp;
}

void HeadSort::adjustHeap(int arr[], int i, int length)
{
    int temp = arr[i];
    for (int k=2*i +1; k<length; k=2*k+1) {
        if(k+1 < length && arr[k] < arr[k+1]){  //选择左右子节点中最大的
            k++;
        }
        if(arr[k] > temp){
            arr[i] = arr[k];
            i = k;
            adjustNum++;
        }else{
            break;
        }
    }
    arr[i] = temp;
}

int HeadSort::getLeft(int arr[], int index)
{
    index = 2*index + 1;
    return arr[index];
}

int HeadSort::getRight(int arr[], int index)
{
    index = 2*index + 2;
    return arr[index];
}
