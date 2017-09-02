//
//  Manager.cpp
//  StrToInt
//
//  Created by 王振丰 on 16/12/19.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#include "Manager.h"
#include "TreeNode.hpp"
@implementation Manager
+(Manager*)shareInstance
{
    static Manager *share = nil;
    if (share == nil) {
        share = [[Manager alloc]init];
    }
    return share;
}

-(void)Constrct
{
    ConstructCore *core;
    int arr1[] = {1,2,4,7,3,5,6,8};
    int arr2[] = {4,7,2,1,5,3,8,6};
    int* point1 = arr1;
    int* point2 = arr2;
    int lenght = 8;
    core->Constrct(point1,point2,lenght);
}

@end