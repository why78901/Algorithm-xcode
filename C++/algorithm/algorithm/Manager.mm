//
//  Manager.cpp
//  StrToInt
//
//  Created by 王振丰 on 16/12/19.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#include "Manager.hpp"
#include "StrToInt.hpp"
#include "Print1ToMaxofNember.hpp"
#include "LCS.hpp"
#include "BubbleSort.hpp"
#include "HeapSort.hpp"
@implementation Manager
+(Manager*)shareInstance
{
    static Manager *share = nil;
    if (share == nil) {
        share = [[Manager alloc]init];
    }
    return share;
}

-(void)StrToInt
{
    String *str;
    char * ss = "S3DF1 G31SD  F3GS13";
    str->strToInt(ss);
}

-(void)Start
{
    LCS *lcs = new LCS();
    lcs->Init();
}

-(void)Print1ToMaxofNumber
{
    print *pri = new print();
    pri->toMaxNumber(2);
}

-(void)Sort
{
//    BubbleSort *bubble = new BubbleSort();
//    bubble->Sort();
    HeadSort *head = new HeadSort();
    head->Sort();
}

-(void)FlagSort
{
    BubbleSort *bubble = new BubbleSort();
    bubble->FlagSort();
}
@end
