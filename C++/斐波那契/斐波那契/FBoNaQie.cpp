//
//  FBoNaQie.cpp
//  斐波那契
//
//  Created by 王振丰 on 16/12/20.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#include "FBoNaQie.hpp"
long FiBonaci::main()
{
    fiboarr[0] = 1;
    fiboarr[1] = 1;
    for (int i=2; i<20; i++)
    {
        fiboarr[i] = fiboarr[i-1] + fiboarr[i-2];
    }
    return fiboarr[19];
}