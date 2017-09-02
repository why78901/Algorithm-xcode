//
//  TreeNode.hpp
//  CreateBinaryTree
//
//  Created by 王振丰 on 17/1/2.
//  Copyright © 2017年 王振丰. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <stdio.h>

struct BinaryTreeNode
{
    int m_nValue;
    struct BinaryTreeNode* m_pLeft;
    struct BinaryTreeNode* m_pRight;
};

class ConstructCore
{
public:
    ConstructCore(int *startPreorder,int* endPreorder,int* startInorder,int* endInorder);
    BinaryTreeNode* Constrct(int *preorder, int* inorder, int lenght);
    BinaryTreeNode* iteraters(int *startPreorder,int* endPreorder,int* startInorder,int* endInorder);
    protected:
    int *startPreorder;
    int *endPreorder;
    int *startInorder;
    int *endInorder;
};

#endif /* TreeNode_hpp */
