//
//  HeapSort.hpp
//  algorithm
//
//  Created by zhenfengwang on 2019/8/15.
//  Copyright © 2019 王振丰. All rights reserved.
//

#ifndef HeapSort_hpp
#define HeapSort_hpp

#include <stdio.h>
#include "SortBase.hpp"
using namespace std;
class HeadSort
{
public:
    HeadSort();
    void Sort();
private:
    void adjustHeap(int arr[],int i,int length);
    int getLeft(int arr[],int index);
    int getRight(int arr[],int index);
    void swap(int arr[],int fristIndex,int lastIndex);
    int adjustNum;
};

#endif /* HeapSort_hpp */
