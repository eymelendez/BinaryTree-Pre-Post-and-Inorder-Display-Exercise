// TreeNode.h

//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** A class of nodes for an array-based binary tree.
Listing 16-1.
@file TreeNode.h */

#ifndef _TREE_NODE
#define _TREE_NODE

template<class ItemType>
class TreeNode
{

private:
	ItemType item;        // Data portion
	int      leftChild;   // Index to left child
	int      rightChild;  // Index to right child

public:
	TreeNode();
	TreeNode(const ItemType& nodeItem, int AleftChild, int ArightChild);

	// Declarations of the methods setItem, getItem, setLeft, getLeft,
	// setRight, and getRight are here.
}; // end TreeNode

// #include "TreeNode.cpp"

#endif 

   // Insert your header information here
   // TreeNode.cpp:  Tree Node method implementations
   // CS 2150: Lab 5

// #include "TreeNode.h"

   //Default Constructor -left and right are NULL, value '?'
template<class ItemType>
TreeNode<ItemType>::TreeNode() {
	item = NULL;
	leftChild = 0;
	rightChild = 0;
}

template<class ItemType>//Constructor - sets value to val
TreeNode<ItemType>::TreeNode(const ItemType& nodeItem, int aLeftChild, int aRightChild) {
	item = nodeItem;
	leftChild = aLeftChild;
	rightChild = aRightChild;
}
