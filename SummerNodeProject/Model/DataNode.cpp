//
//  DataNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 workshop. All rights reserved.
//

#include "DataNode.hpp"


//Constructors
template <class Type>
DataNode<Type> :: DataNode()
{
    this->nodeData = nullptr;
}

template <class Type>
DataNode<Type> :: DataNode(Type nodeData)
{
    this->nodeData = nodeData;
    this->nodePointer = nullptr;
}
// End constructors

//Getters and Setters

template <class Type>
Type DataNode<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
void DataNode<Type> :: setNodePointer(DataNode<Type>* nodePointer)
{
    this->nodePointer = nodePointer;
}

//End Getters/Setters