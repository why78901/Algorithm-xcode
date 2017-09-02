//
//  Manager.hpp
//  StrToInt
//
//  Created by 王振丰 on 16/12/19.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Manager : NSObject

+(Manager*)shareInstance;

-(void)StrToInt;
-(void)Start;
-(void)Print1ToMaxofNumber;
@end
