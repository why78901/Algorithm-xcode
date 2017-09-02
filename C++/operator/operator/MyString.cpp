//
//  MyString.cpp
//  operator
//
//  Created by 王振丰 on 16/12/21.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#include "MyString.hpp"
//CMyString& CMyString::operator =(const CMyString& str)
//{
//    if (this == &str)
//    {
//        return *this;
//    }
//    delete []m_pData;
//    m_pData = nullptr;
//    m_pData = new char[strlen(str.m_pData) + 1];
//    strcpy(m_pData, str.m_pData);
//    return *this;
//}

CMyString& CMyString::operator =(const CMyString& str)
{
    
    if (this == &str)
    {
        return *this;
    }
    
    //防止内存非配失败的写法 （异常安全）
    if (this != &str)
    {
        CMyString strTemp(str);
        char* pTemp = strTemp.m_pData;
        strTemp.m_pData = m_pData;
        m_pData = pTemp;
    }
    return *this;
}
