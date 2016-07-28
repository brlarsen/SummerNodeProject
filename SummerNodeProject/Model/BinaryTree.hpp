//
//  BinaryTree.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 workshop. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>
#include "BinaryTreeNode.cpp"

template <class Type>
class BinaryTree
{
private:
    BinaryTreeNode<Type> * root;
    void insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * rootNode);
    
public:
    BinaryTree();
    void insert(Type data);
    void inOrderTraversal(BinaryTreeNode<Type> * currentNode);
    void preOrderTraversal(BinaryTreeNode<Type> * currentNode);
    void postOrderTraversal(BinaryTreeNode<Type> * currenNode);
    int calculateSize();
    bool remove(Type data);
    BinaryTreeNode<Type> * getRoot();
};



#endif /* BinaryTree_hpp */