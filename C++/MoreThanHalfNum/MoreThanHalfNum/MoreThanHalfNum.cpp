//
//  MoreThanHalfNum.cpp
//  MoreThanHalfNum
//
//  Created by 王振丰 on 16/12/20.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#include "MoreThanHalfNum.hpp"

int MoreThanHalfNum::moreThanHalfNum(int *arr,int len)
{
    int result = arr[0];
    int count = 1;
    
    for (int i=1; i < len; i++)
    {
        if (arr[i] ==result)
        {
            count++;
        }
        else if(count == 0)
        {
            result = arr[i];
            count = 1;
        }
        else
        {
            count--;
        }
    }
    
    return result;
}

//void testMain()
//{
//    int arr[5] = {1,0,1,2,1};
//    moreThanHalfNum(arr,5);
//}