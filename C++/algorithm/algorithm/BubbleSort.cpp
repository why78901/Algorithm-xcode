//
//  BubbleSort.cpp
//  algorithm
//
//  Created by 王振丰 on 2019/7/15.
//  Copyright © 2019 王振丰. All rights reserved.
//

#include "BubbleSort.hpp"
BubbleSort::BubbleSort(){
    
}

void BubbleSort::Sort(){
    int arr[10] = {1,5,2,86,432,53,26,53,23,42};
    int i,j,temp,len;
    len = sizeof(arr)/sizeof(int);
    int calNum = 0;
    for (i=0; i<len-1; i++) {
        //每一轮比较前 n-1-i 个，也就是说，已经排序好的最后 i 个不用比较
        for (j=0; j<len-1-i; j++) {
            calNum++;
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (i=0; i<len; i++) {
        printf("%d ",arr[i]);
    }
    printf("%d \n",calNum);
    
}

void BubbleSort::FlagSort(){
    int arr[10] = {1,5,2,86,432,53,26,53,23,42};
    int i,j,temp,len,calNum;
    bool isSort = false;
    len = sizeof(arr)/sizeof(int);
    calNum = 0;
    for (i=0; i<len-1; i++) {
        isSort = true;
        //每一轮比较前 n-1-i 个，也就是说，已经排序好的最后 i 个不用比较
        for (j=0; j<len-1-i; j++) {
            calNum++;
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSort = false;
            }
        }
        if (isSort) { //如果isSort没有变化说明已经排好序了
            break;
        }
    }
    
    printf("BubbleSort \n");
    for (i=0; i<len; i++) {
        printf("%d ",arr[i]);
    }
    printf("calNum%d \n",calNum);
}
