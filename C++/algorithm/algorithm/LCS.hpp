//
//  LRC.hpp
//  algorithm
//
//  Created by 王振丰 on 17/8/31.
//  Copyright © 2017年 王振丰. All rights reserved.
//
//最长公共子序列

#ifndef LRC_hpp
#define LRC_hpp

#include <stdio.h>
#include <string>
using namespace std;

class LCS
{
public:
    LCS();
    void Init();

private:
    int max(int a, int b);
    void lrc(const char* str1, const char* str2, std::string& str);
};
#endif /* LRC_hpp */
