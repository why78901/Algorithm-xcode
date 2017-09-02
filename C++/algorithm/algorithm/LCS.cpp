//
//  LRC.cpp
//  algorithm
//
//  Created by 王振丰 on 17/8/31.
//  Copyright © 2017年 王振丰. All rights reserved.
//

#include "LCS.hpp"
#include <iostream>
#include<vector>
LCS::LCS()
{
    
}

void LCS::Init()
{
    const char* str1 = "ABCBDAB";
    const char* str2 = "BDCABA";
    std::string str;
    lrc(str1, str2, str);
    std::cout << str.c_str() << std::endl;
}

void LCS::lrc(const char *str1, const char *str2, std::string &str)
{
    int size1 = (int)strlen(str1);
    int size2 = (int)strlen(str2);
    const char* s1 = str1-1;
    const char* s2 = str2-1;
    vector<vector<int> > chess(size1+1, vector<int>(size2+1));
    int i,j;
    for (int i = 0; i < size1; i++)
    {
        chess[i][0] = 0;
    }
    for (int j=0; j<=size2; j++)
    {
        chess[0][j] = 0;
    }
    
    //生成相同字符图（size1 * size的图）
    for (i=1; i<size1; i++)
    {
        for (j=1; j<=size2; j++)
        {
            if (s1[i]==s2[j])
            {
                chess[i][j] = chess[i-1][j-1] + 1;
            }
            else
            {
                chess[i][j] =max(chess[i][j-1], chess[i-1][j]);
            }
        }
    }
    
    i = size1;
    j = size2;
    while ((i != 0) && (j != 0))
    {
        if (s1[i] == s2[j])
        {
            str.push_back(s1[i]);
            i--;
            j--;
        }
        else
        {
            if (chess[i][j-1] > chess[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    reverse(str.begin(), str.end());
}

int LCS::max(int a, int b)
{
    if (a > b) {
        return a;
    }
    return b;
}