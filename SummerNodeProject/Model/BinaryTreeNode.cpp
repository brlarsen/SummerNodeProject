//
//  BinaryTreeNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 workshop. All rights reserved.
//

#include "BinaryTreeNode.hpp"


//Constructors

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : DataNode<Type>()
{
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : DataNode<Type>(data)
{
    //this -> setNodeData(data); This is not needed because of DataNode<Type>(data) above
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
    
}

//Getters and Setters

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return leftChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return rightChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getparent()
{
    return parent;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * leftChild)
{
    this -> leftChild = leftChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * rightChild)
{
    this -> rightChild = rightChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setParent(BinaryTreeNode<Type> * parent)
{
    this -> parent = parent;
}



//Java > C++
//&&
//Mac > PC