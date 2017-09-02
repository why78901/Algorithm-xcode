//
//  CopyList.cpp
//  algorithm
//
//  Created by 王振丰 on 17/3/29.
//  Copyright © 2017年 王振丰. All rights reserved.
//

#include "CopyList.hpp"
ComplexListNode* CopyComplexList::Clone(ComplexListNode *pHead)
{
    CloneNodes(pHead);
    ConnectSiblingNodes(pHead);
    return ReconnectNodes(pHead);
}

ComplexListNode* CopyComplexList::ReconnectNodes(ComplexListNode *pHead)
{
    ComplexListNode* pNode = pHead;
    ComplexListNode* pClonedHead = nullptr;
    ComplexListNode* pClonedNode = nullptr;
    
    if (pNode != nullptr)
    {
        pClonedHead = pClonedNode = pNode->m_pNext;
        pNode->m_pNext = pClonedNode->m_pNext;
        pNode = pNode->m_pNext;
    }
    
    while (pNode != nullptr)
    {
        pClonedNode->m_pNext = pNode->m_pNext;
        pClonedNode = pClonedNode->m_pNext;
        pNode->m_pNext = pClonedNode->m_pNext;
        pNode = pNode->m_pNext;
    }
    return pClonedHead;
}

void CopyComplexList::CloneNodes(ComplexListNode *pHead)
{
    ComplexListNode* pNode = pHead;
    while (pNode != nullptr)
    {
        ComplexListNode* pCloned = new ComplexListNode();
        pCloned->m_nValue = pNode->m_nValue;
        pCloned->m_pNext = pNode->m_pNext;
        pCloned->m_pSibling = nullptr;
        
        pNode->m_pNext = pCloned;
        pNode = pCloned->m_pNext;
    }
}

void CopyComplexList::ConnectSiblingNodes(ComplexListNode *pHead)
{
    ComplexListNode* pNode = pHead;
    while (pNode != nullptr)
    {
        ComplexListNode* pCloned = pNode->m_pNext;
        if (pNode->m_pSibling != nullptr)
        {
            pCloned->m_pSibling = pNode->m_pSibling->m_pNext;
        }
        pNode = pCloned->m_pNext;
    }
}