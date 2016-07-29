//
//  HashTable.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 workshop. All rights reserved.
//

#include "HashTable.hpp"
//constructor / destructor
template <class Type>
HashTable<Type> :: HashTable()
{
    this -> capacity = 101;
    this -> size = 0;
    this -> efficiencyPercentage = .667;
    
    this -> front = new HashNode<Type>();
    HashNode<Type> * currentEnd = front;
    //Loop to create the first array of nodes for storage.
    for  (int index = 1; index < capacity; index++)
    {
    HashNode<Type> * next = new HashNode<Type>();
        currentEnd -> setNode(next);
        currentEnd = next;
    }
    
}
template <class Type>
void HashTable<Type> :: add(Type data)
{
    if ((static_cast<double>(size) / capacity) >= efficiencyPercentage)
    {
        resize();
    }
    
    long position = findPosition(data);
    
    HashNode<Type> * indexPointer = front;
    
    for(int index = 0; index < position; index++)
    {
        indexPointer = indexPointer -> getNode();
    }
    
    indexPointer -> setData(data);
    indexPointer -> setStuffed(true);
}
