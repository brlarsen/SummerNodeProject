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
    BinaryTreeNode<Type> * insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * rootNode);
    int size;
    
    
public:
    BinaryTree();
    void insert(Type data);
    void inOrderTraversal(BinaryTreeNode<Type> * currentNode);
    void preOrderTraversal(BinaryTreeNode<Type> * currentNode);
    void postOrderTraversal(BinaryTreeNode<Type> * currentNode);
    void calculateSize(BinaryTreeNode<Type >  *  currentNode);
    int getSize();
    bool remove(Type data);
    BinaryTreeNode<Type> * getRoot();
};



#endif /* BinaryTree_hpp */
