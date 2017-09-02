//
//  CopyList.hpp
//  algorithm
//
//  Created by 王振丰 on 17/3/29.
//  Copyright © 2017年 王振丰. All rights reserved.
//

#ifndef CopyList_hpp
#define CopyList_hpp

struct ComplexListNode
{
    int m_nValue;
    ComplexListNode* m_pNext;
    ComplexListNode* m_pSibling;
};
#include <stdio.h>
class CopyComplexList
{
public:
    ComplexListNode* Clone(ComplexListNode* pHead);
    ComplexListNode* ReconnectNodes(ComplexListNode* pHead);
    
    void CloneNodes(ComplexListNode * pHead);
    void ConnectSiblingNodes(ComplexListNode* pHead);
//private:
//    ComplexListNode* cloneNode;
    
};
#endif /* CopyList_hpp */
