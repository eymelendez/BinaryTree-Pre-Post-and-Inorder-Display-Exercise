// BinaryNode.h


//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** A class of nodes for a link-based binary tree.
Listing 16-2.
@file BinaryNode.h */

#ifndef _BINARY_NODE
#define _BINARY_NODE

template<class ItemType>
class BinaryNode
{
private:
	ItemType              item;           // Data portion
	BinaryNode<ItemType>* leftChildPtr;   // Pointer to left child
	BinaryNode<ItemType>* rightChildPtr;  // Pointer to right child

public:
	BinaryNode();
	BinaryNode(const ItemType& anItem);
	BinaryNode(const ItemType& anItem,
		BinaryNode<ItemType>* leftPtr,
		BinaryNode<ItemType>* rightPtr);

	void setItem(const ItemType& anItem);
	ItemType getItem() const;

	bool isLeaf() const;

	BinaryNode<ItemType>* getLeftChildPtr() const;
	BinaryNode<ItemType>* getRightChildPtr() const;

	void setLeftChildPtr(BinaryNode<ItemType>* leftPtr);
	void setRightChildPtr(BinaryNode<ItemType>* rightPtr);
}; // end BinaryNode

// #include "BinaryNode.cpp"

#endif 

   //  Created by Frank M. Carrano and Tim Henry.
   //  Copyright (c) 2013 __Pearson Education__. All rights reserved.

   /** @file BinaryNode.cpp */

// #include "BinaryNode.h"

// BINARYNODE CPP FILE 

#include <cstddef>

using namespace std;

template<class ItemType>
BinaryNode<ItemType>::BinaryNode() : item(NULL), leftChildPtr(NULL), rightChildPtr(NULL)
{
	item = NULL;
	leftChildPtr = NULL;
	rightChildPtr = NULL;
}  // end default constructor

template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType& anItem) : item(anItem), leftChildPtr(NULL),
rightChildPtr(NULL)
{
}  // end constructor

template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType& anItem, BinaryNode<ItemType>* leftPtr,
	BinaryNode<ItemType>* rightPtr) : item(anItem), leftChildPtr(leftPtr), rightChildPtr(rightPtr)
{
}  // end constructor

template<class ItemType>
void BinaryNode<ItemType>::setItem(const ItemType& anItem)
{
	item = anItem;
}  // end setItem

template<class ItemType>
ItemType BinaryNode<ItemType>::getItem() const
{
	return item;
}  // end getItem

template<class ItemType>
bool BinaryNode<ItemType>::isLeaf() const
{
	return ((leftChildPtr == NULL) && (rightChildPtr == NULL));
}

template<class ItemType>
void BinaryNode<ItemType>::setLeftChildPtr(BinaryNode<ItemType>* leftPtr)
{
	leftChildPtr = leftPtr;
}  // end setLeftChildPtr

template<class ItemType>
void BinaryNode<ItemType>::setRightChildPtr(BinaryNode<ItemType>* rightPtr)
{
	rightChildPtr = rightPtr;
}  // end setRightChildPtr

template<class ItemType>
BinaryNode<ItemType>* BinaryNode<ItemType>::getLeftChildPtr() const
{
	return leftChildPtr;
}  // end getLeftChildPtr		

template<class ItemType>
BinaryNode<ItemType>* BinaryNode<ItemType>::getRightChildPtr() const
{
	return rightChildPtr;
}  // end getRightChildPtr		
