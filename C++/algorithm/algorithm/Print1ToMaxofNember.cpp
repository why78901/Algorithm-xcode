//
//  Print1ToMaxofNember.cpp
//  algorithm
//
//  Created by 王振丰 on 17/3/6.
//  Copyright © 2017年 王振丰. All rights reserved.
//

#include "Print1ToMaxofNember.hpp"
print::print()
:strlen(0)
{
    
}

void print::toMaxNumber(int n)
{
    if(n <= 0)
        return;
    strlen = n;
    char *number = new char(strlen);
    memset(number, '0', n);
    
    while (!Increment(number))
    {
        PrintNumber(number);
    }
    
    delete number;
}

bool print::Increment(char *str)
{
    bool isOverflow = false;
    int nTakeOver = 0;
    for (int i = strlen-1; i >= 0; i--)
    {
        int nSum = 0;
        nSum = str[i] - '0' + nTakeOver;
        if (i == strlen - 1)
        {
            nSum++;
        }
        if (nSum >= 10)
        {
            if (i==0)
            {
                isOverflow = true;
            }
            else
            {
                nSum -= 10;
                nTakeOver = 1;
                str[i] = '0'  + nSum;
            }
        }
        else
        {
            str[i] = '0'  + nSum;
            break;
        }
    }
    return isOverflow;
}

void print::PrintNumber(char * number)
{
    bool isBeginning0 = true;
    int nLength = strlen;
    
    for (int i=0;  i< nLength; ++i)
    {
        if (isBeginning0 && number[i] != '0')
        {
            isBeginning0 = false;
        }
        
        if (!isBeginning0)
        {
            printf("%c",number[i]);
        }
    }
    printf("\t");
    
}

