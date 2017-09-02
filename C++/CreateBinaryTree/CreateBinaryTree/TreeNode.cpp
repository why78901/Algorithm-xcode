//
//  TreeNode.cpp
//  CreateBinaryTree
//
//  Created by 王振丰 on 17/1/2.
//  Copyright © 2017年 王振丰. All rights reserved.
//

#include "TreeNode.hpp"
ConstructCore::ConstructCore(int *startPreorder,int* endPreorder,int* startInorder,int* endInorder)
:startPreorder(startPreorder)
,endPreorder(endPreorder)
,startInorder(startInorder)
,endInorder(endInorder)
{
    
}

BinaryTreeNode* ConstructCore::Constrct(int *preorder, int *inorder, int lenght)
{
    
    return iteraters(preorder,preorder + lenght -1,inorder,inorder + lenght -1);
}

BinaryTreeNode* ConstructCore::iteraters(int *startPreorder,int* endPreorder,int* startInorder,int* endInorder)
{
    ConstructCore(startPreorder,endPreorder,startInorder,endInorder);
    
    int rootValue = startPreorder[0];
    BinaryTreeNode* root = new  BinaryTreeNode();
    root->m_nValue = rootValue;
    root->m_pLeft = root->m_pRight = nullptr;
    if (startPreorder == endPreorder)
    {
        if (startPreorder == endPreorder && *startPreorder == *startInorder)
        {
            return root;
        }
        else
        {
            printf("input error");
        }
    }
    
    int *rootInorder = startInorder;
    while (rootInorder <= endPreorder && *rootInorder != rootValue)
    {
        ++rootInorder;
    }
    
    if (rootInorder == endInorder && *rootInorder != rootValue)
    {
        printf("shit");
    }
    
    
    //两个指针指向的内存地址间隔
    long leftLength = rootInorder - startInorder;
    int* leftPreorderEnd = startPreorder + leftLength;
    if (leftLength > 0)
    {
        //构建左子树
        root->m_pLeft = iteraters(startPreorder + 1,leftPreorderEnd,startInorder,rootInorder -1);
    }
    if(leftLength < endPreorder - startPreorder)
    {
        root->m_pRight = iteraters(leftPreorderEnd + 1, endPreorder, rootInorder + 1, endInorder);
    }
    
    return root;
}
