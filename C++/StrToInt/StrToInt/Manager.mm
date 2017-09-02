//
//  Manager.cpp
//  StrToInt
//
//  Created by 王振丰 on 16/12/19.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#include "Manager.hpp"
#include "StrToInt.hpp"
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
    str->strToInt("S3DF1 G31SD  F3GS13");
}

@end