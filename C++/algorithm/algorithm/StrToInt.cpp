//
//  StrToInt.cpp
//  StrToInt
//
//  Created by 王振丰 on 16/12/19.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#include "StrToInt.hpp"
#include <iostream>
#include "string.h"

int String::strToInt(char *str)
{
    int sign = 1;
    
    if (str == nullptr)
    {
        printf("is NULL");
        return 0;
    }
    
    if (*str == '-')
    {
        sign = -1;
    }
    
    int number = 0;
    while (*str != 0)
    {
        
        while (*str == '-' || *str == '+')
        {
            str++;
        }
        
        while (isspace(*str))
        {
            str++;
        }
        
        if (*str >= '0' && *str <= '9')
        {
            //'2'的ASCII码与'0'的ASCII码相减，得到数值2
            number = number * 10 + *str - '0';
            ++str;
        }
        else
        {
            ++str;
        }
    }
    number = sign * number;
    return number;
}