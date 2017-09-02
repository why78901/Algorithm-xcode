//
//  MyString.hpp
//  operator
//
//  Created by 王振丰 on 16/12/21.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#ifndef MyString_hpp
#define MyString_hpp

#include <stdio.h>
#include <string.h>
class CMyString
{
public:
    CMyString(char* pData = nullptr);
    CMyString(const CMyString& str);
    ~CMyString(void);
    CMyString& operator=(const CMyString& str);
private:
    char* m_pData;
};
#endif /* MyString_hpp */
